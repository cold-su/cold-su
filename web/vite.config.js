import { defineConfig } from "vite";
import vue from "@vitejs/plugin-vue";
import { fileURLToPath, URL } from "node:url";

export default defineConfig({
  base: "/pi/",
  plugins: [vue()],
  resolve: {
    alias: {
      "@": fileURLToPath(new URL("./src", import.meta.url)),
      // 章节存放在上一级的 volume/ 里
      "@book": fileURLToPath(new URL("../volume", import.meta.url)),
    },
  },
  server: {
    fs: { allow: [".."] },
  },
});
