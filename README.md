# ESP32 Web Server Base Project

Este repositorio contiene una base escalable para proyectos con ESP32, iniciando con un servidor web simple y extendiéndose a múltiples ejemplos con sensores, control de dispositivos y paneles web.

## Estructura

- `projects/`: contiene los diferentes ejemplos o proyectos.
- `lib/`: librerías comunes reutilizables.
- `data/`: archivos estáticos (HTML/CSS/JS) para usar con SPIFFS o LittleFS.
- `platformio.ini`: configuración de entornos PlatformIO.

## Cómo usar

Compilar y subir un proyecto específico:

```bash
pio run -e base_webserver -t upload