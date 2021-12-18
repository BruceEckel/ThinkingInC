<template>
  <div class="flex items-center justify-center flex-col">
    <div class="relative">
      <!-- TODO: Keep Aspect Ratio -->
      <nuxt-img
        v-if="images.length"
        class="bg-clip-border"
        :src="currentSlide"
        alt=""
        srcset=""
      />
      <button
        class="absolute top-0 bg-blue-500 text-white p-2 rounded hover:bg-blue-800"
        @click="setIndex()"
      >
        Button
      </button>
    </div>
  </div>
</template>

<script>
export default {
  data() {
    return {
      index: 0,
      images: [],
    }
  },
  computed: {
    id() {
      return this.$route.params.id
    },
    currentSlide() {
      return this.images[this.index]
    },
    chapterDirectory() {
      return `/images/chapter_${this.id}`
    },
    endOfSlides() {
      return this.index === this.images.length - 1
    },
  },
  mounted() {
    this.importAll(require.context('../../static', true, /\.svg$/))
  },
  methods: {
    setIndex() {
      if (this.endOfSlides) {
        this.index = 0
      } else {
        this.index += 1
      }
    },
    importAll(r) {
      r.keys().forEach((key) => {
        if (key.includes(`Ch${this.id}`)) {
          this.images.push(key.substr(1))
        }
      })
    },
  },
}
</script>
