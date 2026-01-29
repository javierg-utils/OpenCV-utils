# OpenCV-utils

Este repositorio contiene utilidades para proyectos con **OpenCV en C++**, incluyendo un archivo `config.hpp` diseñado para **silenciar los mensajes de información (INFO)** de OpenCV sin perder la visibilidad de errores importantes.

## 🚀 Objetivo
Facilitar la integración de OpenCV en proyectos científicos y de ingeniería, evitando la saturación de logs en consola y manteniendo un flujo de trabajo limpio y reproducible.

## 📂 Contenido
- `config.hpp`: Encapsula la lógica para redirigir y controlar los mensajes de OpenCV.
- Ejemplo de uso en proyectos Visual Studio con integración vía vcpkg.

## 🛠️ Uso
1. Copia `config.hpp` en tu proyecto.
2. Inclúyelo en tu código:
   ```cpp
   #include "config.hpp"
