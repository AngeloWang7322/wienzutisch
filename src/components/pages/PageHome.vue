<script setup lang="ts">
import { ref, onMounted, onUnmounted } from "vue";
const innerWidth = window.innerWidth;
// const innerHeight = window.innerHeight;
const headerHeight = ref(800);

const minHeaderHeight = ref(10);
const maxHeaderHeight = ref(100);
if (innerWidth > 1200)
{
  maxHeaderHeight.value = 100;
}

const handleScroll = () => {
  headerHeight.value = Math.min(Math.max(maxHeaderHeight.value - window.scrollY / 5, minHeaderHeight.value), maxHeaderHeight.value);
};

onMounted(() => {
  window.addEventListener("scroll", handleScroll);
  handleScroll();
});
onUnmounted(() => {
  window.removeEventListener("scroll", handleScroll);
});
</script>
<template>
  <img class="background-logo" src="../../assets/TransparentLogo.png" />
  <div>

  </div>
  <section class="title-wrapper">
    <div class="column">
      <div class="header" :style="{ height: headerHeight + 'vh' }">
        <div class="row">
          <div class="columm">&nbsp;</div>
          <div class="column">
            <img class="header-logo" src="../../assets/TransparentLogo.png" />
            <div class="subheader-text">
              <h3>Fine Dining für deinen Tisch</h3>
            </div>
          </div>
        </div>
      </div>

      <div class="text-container lined-dashed yellow">
        <h1>Wien zu Tisch</h1>
        <h2>ist unser Fine-Dining Atelier</h2>
        <p>
          wo Vision, Design und Kulinarik eins werden.<br />Ob Food Styling für Marken oder private
          Dinners für besondere Runden: Wir erschaffen Erlebnisse, die verbinden und im Gedächtnis
          bleiben.
        </p>
      </div>
    </div>
  </section>
  <section class="">
    <div class="header-text lined-dashed ">
      <h2>Unsere Leistungen</h2>
    </div>
    <div class="color-wrapper yellow">
      <div class="column">
        <div class="image-card">
          <img src="../../assets/photoshoot/Eingefügtes Bild (9).png" />
        </div>
        <div class="text-card row blue">
          <div class="text-divider">
            <h1>Private Dinners</h1>
          </div>
          <div class="text-divider">
            <p>
              Wir kommen zu dir nach Hause und verwandeln dein Wohnzimmer in ein Fine-DiningAtelier.
            </p>
          </div>
        </div>
        <div class="image-card">
          <img src="../../assets/photoshoot/Eingefügtes Bild.png" />
        </div>
      </div>
    </div>
    <div class="color-wrapper blue">
      <div class="column">
        <div class="text-card yellow row">
          <div class="card-title-container">
            <h2>Pop-Up Erlebnisse</h2>
          </div>
          <div class="card-text-container">
            <p>Heute hier, morgen da aber immer mit Geschmack & Überraschung.</p>
          </div>
        </div>
        <div class="image-card">
          <img src="../../assets/photoshoot/PopUp_1.png" />
        </div>
        <div class="image-card">
          <img src="../../assets/photoshoot/PopUp_2.png" />
        </div>
      </div>
    </div>
    <div class="color-wrapper yellow">
      <div class="column">
        <div class="row stretch">
          <div class="column">
            <div class="text-card column row-text-card blue">
              <div class="card-title-container">
                <h2>Food Styling</h2>
              </div>
              <div class="card-text-container">
                <p>
                  Wir inszenieren Produkte und Gerichte so, dass Marken glänzen für PR, Kampagnen,
                  Magazine, Set Design und Social Media.
                </p>
              </div>
            </div>
            <div class="image-card">
              <img src="../../assets/photoshoot/FoodStyling_2.png" />
            </div>
          </div>
          <div class="image-card-row">
            <img src="../../assets/photoshoot/FoodStyling_1.png" />
          </div>
        </div>
      </div>
    </div>
  </section>
  <section class="color-wrapper">
    <div class="column yellow lined-dashed call-to-action-box">
      <h2>Lass uns deinen <br />Tisch Gestalten!</h2>
      <div class="border lined-thick blue button-mail row">
        <img class="icon-small" src="../../assets/photoshoot/icon_mail.png" />
        <h3>Treten wir <br />in Kontakt!</h3>
      </div>
    </div>
  </section>
  <section>
    <div class="color-wrapper yellow">
      <div class="column">
        <div class="lined-dashed white">
          <h2>Bereits Tische gedeckt von</h2>
        </div>
        <div class="logo-card border">
          <img src="../../assets/photoshoot/logo_sodaStream.png" />
        </div>
        <div class="row">
          <div class="logo-card border primary">
            <img src="../../assets/photoshoot/logo_Braun.jpg" />
          </div>
          <div class="logo-card border">
            <img src="../../assets/photoshoot/logo_cuteConcerts.png" />
          </div>
        </div>
        <div class="row">
          <div class="logo-card border">
            <img src="../../assets/photoshoot/logo_noem.png" />
          </div>
          <div class="logo-card border primary">
            <img src="../../assets/photoshoot/logo_manhattan.jpg" />
          </div>
        </div>
        <div class="logo-card border">
          <img src="../../assets/photoshoot/logo_delonghi.png" />
        </div>
      </div>
    </div>
  </section>
  <section>
    <div class="color-wrapper">
      <div class="column">
        <div class="about-us-wrapper border yellow">
          <div class="about-us-image-container">
            <img src="../../assets/photoshoot/cg_1.png" />
          </div>
          <div class="about-us-text">
            <h1>Carmen & Gloria</h1>
            <div class="divider"></div>
            <h2>Zwei Frauen. Eine Vision: Kulnarik die verbindet</h2>
            <p>
              Zwei junge Wienerinnen verwandeln Essen in Erlebnisse - mit Geschmack, Stil und Herz.
              Ab September 2025 als private Köchinnen & Künstlerinnen unterwegs, die die Wiener
              Standards aufrütteln.
            </p>
          </div>
        </div>
      </div>
    </div>
  </section>
</template>
<style>
.background-logo {
  position: fixed;
  top: auto;
  bottom: auto;
  right: auto;
  top: calc(400px - 45vw);
  left: 7.5%;
  z-index: -10;
  width: 85%;
  opacity: 7%;
}
section {
  display: flex;
  flex-direction: column;
  align-content: center;
  justify-content: center;
}
.header {
  display: flex;
  margin: 0 0 364px 0;
  padding: 24px 0 0 0;
  width: 100vw;
  border: #41403e solid 2px;
  border-top-width: 0;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  overflow: hidden;
  transition: height 0.1s ease;
  background-image: url("../../assets/photoshoot/Eingefügtes Bild (9).png");
  background-position: 50%;
  background-repeat: no-repeat;
  img {
    width: 30%;
  }
  .row {
    justify-content: space-between;
    align-items: end;
  }
}
.subheader-text {
  margin-top: -24px;
  width: 66vw;
  text-align: center;
  color: #ccc6ff;
}
.image-card {
  width: 100%;
  max-height: 200px;
  border-radius: 25px;
  overflow: hidden;
  display: flex;
  img {
    display: flex;
    width: 80%;
    height: max-content;
    min-width: 100%;
    min-height: 100%;
  }
}
.image-card-row {
  display: flex;
  justify-content: center;
  align-items: center;
  border-radius: 25px;
  overflow: hidden;
  width: 200%;
  min-width: 120px;
  img {
    height: 100%;
    object-fit: cover;
    width: 100%;
  }
}
.text-card {
  display: flex;
  border: rgb(51, 51, 51) solid 2px;
  border-radius: 25px;
  padding: 6px 12px;
  align-items: center;
}
.row-text-card {
  display: flex;
  justify-content: center;
  align-items: center;
  width: 60;
  min-width: 150px;
}
.border {
  border: rgb(51, 51, 51) solid 2px;
  border-radius: 25px;
  padding: 12px 8px;
}
.doodle-border {
  padding: 0.5rem 0.5rem;
  font-size: 1rem;

  border-top-left-radius: 255px 15px;
  border-top-right-radius: 15px 225px;
  border-bottom-right-radius: 225px 15px;
  border-bottom-left-radius: 15px 255px;
  border: #41403e solid 2px;
}
.lined-thick {
  border: solid 3px #41403e;
}
.lined-thin {
  border: solid 2px #72716f;
}
.lined-dotted {
  border: dotted 2px #41403e;
}
.lined-dashed {
  background-image: url("data:image/svg+xml,%3csvg width='100%25' height='100%25' xmlns='http://www.w3.org/2000/svg'%3e%3crect width='100%25' height='100%25' fill='none' rx='22' ry='22' stroke='%23333' stroke-width='4' stroke-dasharray='4%2c 14' stroke-dashoffset='0' stroke-linecap='square'/%3e%3c/svg%3e");
  border-radius: 22px;
}
.divider {
  margin: 12px;
  border-top: #41403e solid 2px;
  width: 80vw;
}
.text-container {
  text-align: center;
  width: 85%;
  padding: 16px 22px;
}
.blue {
  background-color: #e3e0fd6b;
  > h1 h2 p {
    color: #66591e;
  }
}
.yellow {
  background-color: #f7efde98;
  > h1,
  h2,
  p {
    color: #3d3681;
  }
}
.white {
  background-color: white;
}
.header-text {
  margin: 464px 0 265px 0;
  display: flex;
  align-self: center;
  justify-content: center;
  width: fit-content;
  padding: 0px 124px;
  background-color: #f8eec3e8;
  h1 {
    text-align: auto;
    text-justify: auto;
  }
}
.sticky {
  position: sticky;
  top: 14px;
  z-index: 10;
}
.column {
  z-index: 5;
  max-width: 448px;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  gap: 12px;
  text-align: center;
  .logo-card {
    height: 180px;
    background-color: white;
    border-radius: 25px;
    overflow: hidden;
    height: fit-content;
    padding: 14px 10px;
    img {
      width: 100%;
      height: auto;
    }
  }
}
.row {
  display: flex;
  flex-direction: row;
  height: 100%;
  max-height: fit-content;
  gap: 12px;
  align-items: center;
  justify-content: center;
  .primary {
    display: flex;
    min-height: 100px;
    min-width: 45%;
  }
  .logo-card {
    background-color: white;
    display: flex;
    padding: 14px 10px;
  }
}
.stretch {
  align-items: stretch;
}
.call-to-action-box {
  width: 66%;
  padding: 24px 4px;
  margin: 324px 0;
}

.button-mail {
  display: flex;
  align-self: center;
  align-items: center;
  justify-content: center;
  padding: 0px 10px;
}
.icon-small {
  width: 28px;
}
.about-us-wrapper {
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
}
.about-us-image-container {
  display: flex;
  width: 100%;
  overflow: hidden;
  border-radius: 22px;
  img {
    width: 100%;
  }
}
.about-us-text {
  text-align: center;
}
.color-wrapper {
  padding: 84px 42px;
  width: 100%;
  border: solid 0px rgb(105, 105, 105);
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
}
.title-wrapper {
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  margin-bottom: 64px;
}
.navigation-container{
  position: absolute
}

h1,
h2,
h3,
h4,
h5,
h6 {
  font-family: Amatic SC, sans-serif;
  font-weight: bold;
  font-style: 120%;
}
h1 {
  font-size: 42px;
  line-height: 160%;
  font-weight: 700;
}
h2 {
  font-size: 32px;
  line-height: 140%;
}
p {
  font-size: 14px;
}
@media only screen and (min-width: 1200px) {
  .column {
    max-width: 600px;
  }

  h1 {
    font-size: 80px;
  }
  h2 {
    font-size: 60px;
  }
  h3 {
    font-size: 32px;
  }
  p {
    font-size: 24px;
  }
  .icon-small {
    width: 38px;
  }
  .image-card {
    max-height: 350px;
  }
  .image-card-row {
    min-height: 100%;
    max-width: fit-content;
    max-height: fit-content;
    overflow: hidden;
    width: 100%;
    min-width: 220px;
    img {
      max-height: none;
    }
  }
  .color-wrapper {
    padding: 50px 32px;
  }
  .header {
    display: flex;
    margin: 0 0 564px 0;
    padding: 24px 0 0 0;
    width: 100vw;
    border-top-width: 0;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    overflow: hidden;
    transition: height 0.1s ease;
    background-image: url("../../assets/photoshoot/Eingefügtes Bild (9).png");
    background-position: 50%;
    background-repeat: no-repeat;
    background-size: cover;
}
}
</style>
