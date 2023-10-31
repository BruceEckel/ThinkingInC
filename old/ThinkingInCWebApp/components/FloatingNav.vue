<template>
  <div class="nav">
    <div class="nav-header">
      <NuxtLink to="/" class="capitals">
        <div>Thinking in C</div>
      </NuxtLink>
    </div>
    <NuxtLink
      v-for="(chapter, i) in chapters"
      :key="i"
      :to="`/chapters/${chapter.chapter}`"
      class="nav-link hover:underline hover:bg-gray-300"
    >
      {{ chapter.title }}
    </NuxtLink>
  </div>
</template>

<script>
export default {
  data() {
    return {
      chapters: [
        {
          chapter: 1,
          title: 'Chapter 1: Introduction and Getting Started',
        },
        {
          chapter: 2,
          title: 'Chapter 2: Fundamental Data Types',
        },
      ],
    }
  },
}
</script>

<style scoped>
.capitals {
  @apply mb-2 text-gray-1 font-medium uppercase;
  letter-spacing: 0.5px;
}
.nav {
  @apply sticky w-auto h-auto min-w-1/4 px-6 py-8 rounded-lg border border-white-2 bg-white-1;
  box-shadow: 4px 4px 12px 0 rgb(0 0 0 / 6%);
}
.nav-header {
  @apply w-full mb-4 pb-0 border-b border-white-2 uppercase;
}
.nav-link {
  @apply text-black-1 py-2 flex w-full rounded leading-6 font-medium;
  transition: background-color 0.2s;
}
</style>
