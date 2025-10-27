import {createRouter, createWebHistory } from 'vue-router'
import PageHome from '../components/pages/PageHome.vue'
const routes = [
  {path: "/", component: PageHome},
]


export default createRouter({
  history: createWebHistory(),
  routes
})
