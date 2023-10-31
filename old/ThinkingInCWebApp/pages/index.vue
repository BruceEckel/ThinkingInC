<template>
  <div>
    <div class="flex flex-col items-start">
      <div class="flex flex-col h-full">
        <div class="text-black-2 font-bold text-4xl">
          Thinking in C: Foundations for Java & C++
        </div>
        <div class="mt-2 mb-5 text-gray-2 font-medium leading-5 uppercase">
          by Chuck Allison
        </div>
        <p class="my-1 text-xl text-black-1">
          Hello! I'm Bruce Eckel, and I have worked with Chuck Allison to bring
          you this, which is being published by my company, MindView, LLC, as a
          way to prepare you for the following Prentice Hall books:
        </p>
        <div class="mt-10 flex space-x-4">
          <a v-for="(book, key) in books" :key="key" :href="book.amazonLink">
            <img class="h-64" :src="book.imgLink" :alt="book.title" />
          </a>
        </div>
      </div>
    </div>

    <div class="mt-8 border-b w-full border-gray-300"></div>
  </div>
</template>

<script lang="ts">
import Vue from 'vue'

export default Vue.extend({
  data() {
    return {
      books: [
        {
          title: 'Thinking in Java',
          imgLink:
            'http://ix.cs.uoregon.edu/~norris/cis330books/ThinkingInC/images/TIJ4.jpg',
          amazonLink:
            'https://www.amazon.com/Thinking-Java-Edition-Bruce-Eckel/dp/0131872486',
        },
        {
          title: 'Code Capsules',
          imgLink:
            'http://ix.cs.uoregon.edu/~norris/cis330books/ThinkingInC/images/CodeCapsules.jpg',
          amazonLink: 'https://www.amazon.com/gp/product/0135917859',
        },
        {
          title: 'Thinking in C++',
          imgLink:
            'http://ix.cs.uoregon.edu/~norris/cis330books/ThinkingInC/images/TICPPV1.jpg',
          amazonLink:
            'https://www.amazon.com/Thinking-Introduction-Standard-Volume-Edition/dp/0139798099',
        },
        {
          title: 'Thinking in C++: Volume Two',
          imgLink:
            'http://ix.cs.uoregon.edu/~norris/cis330books/ThinkingInC/images/TICPPV2.jpg',
          amazonLink:
            'https://www.amazon.com/Thinking-Volume-Programming-Bruce-Eckel/dp/0130353132',
        },
      ],
    }
  },
})
</script>
