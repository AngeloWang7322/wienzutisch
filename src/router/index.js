import {createRouter, createWebHistory } from 'vue-router'

const routes = [
  {path: "/", component: Home},
  {path: "/services", component: Services},
  {path: "/aboutus", component: AboutUs},
  {path: "/contact", component: Contact}
]

export default createRouter({
  history: createWebHistory(),
  routes
})
