<script setup lang="ts">
</script>
<template>
  <div class="header-wrapper">
    <nav class="content-wrapper">
      <router-link to="/"><h1>Home</h1></router-link>
      <router-link to="/Services"><h1>Leistungen</h1></router-link>
      <router-link to="/AboutUs"><h1>Über uns</h1></router-link>
      <router-link to="/Contct"><h1>Kontakt</h1></router-link>
    </nav>
  </div>
</template>
<style>
.header-wrapper{
  display: flex;
  position: sticky;
  height: 92px;
  align-items: center;
  justify-content: end;
}

.content-wrapper{
  display: flex;
  justify-items: end;
  flex-direction: row;
  gap: 42px;
  margin-right: 10vw;

}
</style>

