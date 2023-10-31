<template>
  <div>
    <div class="noise-overlay"></div>
    <div class="h-screen max-w-screen-xl mx-auto py-10 px-10 xl:px-0">
      <div class="h-full relative flex justify-center">
        <floating-nav />
        <div class="flex h-auto w-full min-w-3/4 pr-0 pl-32">
          <Nuxt />
        </div>
      </div>
    </div>
  </div>
</template>

<style scoped>
.noise-overlay {
  position: fixed;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  background-image: url(https://global-uploads.webflow.com/5f8e97a7f04a9fe98d9401a6/61968a5d0b843b7e6b7ad88d_noise.png);
  background-position: 0 0;
  background-size: auto;
  background-repeat: repeat;
  opacity: 0.3;
}
</style>
