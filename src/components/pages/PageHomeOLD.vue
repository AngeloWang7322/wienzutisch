<script setup lang="ts"></script>
<template>
  <section class="intro-section">
    <div class="intro-box">
      <img class="background-img" src="../../assets/photoshoot/Eingefügtes Bild (5).png" />
      <h3 class="intro-slogan">&nbsp;</h3>
      <div class="logo-container">
        <img src="../../assets/logo.png" alt="logo" />
      </div>
      <h3 class="intro-slogan">Fine Dining für deinen Tisch</h3>
    </div>
  </section>
  <section class="service-section">
    <div class="service-section-broad">
      <img src="../../assets/photoshoot/Eingefügtes Bild (5).png" class="service-background" />
      <div class="service-text-container">
        <h2 class="service-header">Fine Dining</h2>
        <p class="service-text">wir sind ur gail und machen ur guaiole essen</p>
      </div>
    </div>
    <div class="service-section-broad">
      <img src="../../assets/photoshoot/Eingefügtes Bild (3).png" class="service-background" />
      <div class="service-text-container right">
        <h2 class="service-header">Food Styling</h2>
        <p class="service-text">
          Unser Food is so drippy wie eure muende wenn ihr under gestyltes Food fooded
        </p>
      </div>
    </div>
    <div class="service-section-broad">
      <img src="../../assets/photoshoot/Eingefügtes Bild (5).png" class="service-background" />
      <div class="service-text-container">
        <h2 class="service-header">Fine Dining</h2>
        <p class="service-text">wir sind ur gail und machen ur guaiole essen</p>
      </div>
    </div>
  </section>
  <section class="why-us-section">
    <div class="why-us-container">
      <h1 class="why-us-text">Warum Wien zu Tisch?</h1>
    </div>
  </section>
  <section class="about-us">
    <h1 class="header">Wer wir sind</h1>
    <img src="../../assets/photoshoot/cg_1.png" class="cg_1" />
  </section>
</template>
<style>
.intro-box {
  height: 565px;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  font-family: Fuzzy Bubbles, serif;
  color: var(--vt-c-main);
  font-size: 24px;
  position: relative;
  background-color: rgba(0, 0, 0, 0.285);

  .background-img {
    height: 100%;
    width: 100%;
    position: absolute;
    z-index: -1;
    overflow: hidden;
    backface-visibility: hidden;
    object-fit: cover;
  }

  img {
    width: 200px;
  }

  .intro-slogan {
    color: white;
  }
}

.cg_1 {
  width: 100%;
}

section {
  gap: 54px;
  margin-bottom: 128px;
}

.section-header {
  display: flex;
  justify-content: center;
  font-size: 56px;
}

.service-section-broad {
  width: 100%;
  height: 480px;
  position: relative;
  background-color: rgb(233, 224, 224);
  margin-bottom: -2px;
  transition-duration: 250ms;
  .service-background {
    width: 100%;
    height: 100%;
    overflow: hidden;
    object-fit: cover;
    display: block;
    backface-visibility: hidden;
    border: 2px solid black;
  }

  .service-text-container {
    border: 2px solid black;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: end;
    text-align: end;
    position: absolute;
    height: 480px;
    width: 30%;
    padding: 32px;
    font-size: large;
    color: rgb(0, 0, 0);
    background-color: rgb(255, 252, 242);
    transform: translate(0%, -100%);
    transition: 250ms;
    .service-header {
      font-size: 52px;
      font-weight: 500;
    }

    .service-text {
      font-size: 24px;
      display: none;
    }
  }
  .right {
    align-items: start;
    text-align: left;
    justify-self: right;
  }
  &:hover {
    .service-text-container {
      border: 2px solid black;
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: end;
      text-align: end;
      position: absolute;
      height: 480px;
      width: 50%;
      padding: 32px;
      font-size: large;
      color: rgb(0, 0, 0);
      background-color: rgb(255, 252, 242);
      transform: translate(0%, -100%);
      transition-duration: 250ms;
      .service-header {
        transition-duration: 250ms;
      }
      .service-text {
        display: inherit;
        transition-duration: 250ms;
      }
    }
    .right {
      align-items: start;
      text-align: left;
      justify-self: right;
    }
  }
}
.why-us-container {
  margin: 128px, 0, 256px, 0;
  height: 100vh;
  display: flex;
  align-items: center;
  justify-content: center;
  .why-us-text {
    padding: 16px 32px;
    border: 2px dashed black;
  }
}
</style>
