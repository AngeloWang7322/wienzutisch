<script setup lang="ts">
</script>
<template>

<section class="intro-section">
  <div class="intro-box">
    <h1 class="intro-title">
      Wien zu Tisch
    </h1>
    <h3 class="intro-slogan">
      ,,Hier steht eine leiwandes Slogan"
    </h3>
  </div>
</section>
<section class="usp-section">
  <div class="usp-wrapper">
    <h1>Warum Wien zu Tisch?</h1>
    <div class="usp-highlights">
      <div class="highlight-item">
          <h2>Passen dem Kunde an</h2>
          <p></p>
      </div>
      <div class="highlight-item">
          <h2>Kuemmern um uns alles</h2>
          <p></p>
      </div>
      <div class="highlight-item">
        <h2>Individuelle Menues</h2>
        <p></p>
      </div>
      <div class="highlight-item">
        <h2>Ehrlicher Service</h2>
        <p>Persönlicher Kontakt, Handschlagqualität und Verlässlichkeit.</p>
      </div>
    </div>
  </div>
</section>

</template >
<style>
.intro-box{
  height: 69vh;
  background-color: rgba(0, 0, 0, 0.437);
    display: flex;
    flex-direction: column;
  align-items: center;
  justify-content: center;

  .intro-title{
    color: white;
    font-style:oblique;
    font-size: 32px;
  }
  .intro-slogan{
    color: white;
    font-style: italic;
  }
}
.usp-wrapper{
  display: flex;
  justify-content: center;
  justify-items: center;
  flex-direction: column;

}
section{
  margin-bottom: 124px;
}

</style>
