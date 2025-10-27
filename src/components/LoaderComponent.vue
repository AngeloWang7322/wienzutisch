<template>
  <div v-if="isVisible" class="loader-container">
    <div class="logo-container">
      <img src="../assets/logo.png">
    </div>
  </div>
</template>
<script setup lang="ts">
import {type Ref, ref,} from "vue";


const isVisible: Ref<boolean> = ref(true);

setTimeout(() => {
  isVisible.value = false
}, 2500)
</script>
<style scoped>
.loader-container {
  position: fixed;
  inset: 0;
  background: white;
  display: flex;
  justify-content: center;
  align-items: center;
  z-index: 9999;
  opacity: 100;
  animation: fadeOut 1.5s ease-in-out forwards;
  animation-delay: 1.5s;
}
.logo-container {
  width: 200px;
  animation: spin 1.5s cubic-bezier(0.15, 0.5, 0.2, 0.9);
  justify-content: center;
  align-items: center;
  img {
    width: 200px;
  }
}
@keyframes fadeOut {
  to {
    opacity: 0;
    visibility: hidden;
  }
}
@keyframes spin {
  0% {transform: rotateY(180deg)}
  100% {transform: rotateY(1080deg)}
}
</style>

