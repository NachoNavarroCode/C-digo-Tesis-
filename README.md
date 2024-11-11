Este proyecto incluye dos archivos de código principales:

Un archivo de código para Arduino encargado del procesamiento y acoplamiento digital de dos señales.
Un flujo de Node-RED que crea una interfaz gráfica para la visualización de las señales procesadas.
Estructura de Archivos
FACTOR_DE_POTENCIA.ino: Código fuente para Arduino.
TesisNode.json: Configuración del flujo en Node-RED para visualización.
Descripción de los Archivos
codigo_arduino.ino
Este archivo de código para Arduino realiza el procesamiento y acoplamiento digital de dos señales de entrada analógicas. Su funcionalidad principal es la siguiente:

Lectura de Señales: Lee dos señales analógicas provenientes de sensores o dispositivos de medición.
Digitalización y Filtrado: Aplica técnicas de digitalización y filtrado para obtener datos estables y evitar ruido en las señales.
Procesamiento de Señales: Efectúa operaciones de sincronización y acoplamiento para que ambas señales puedan analizarse conjuntamente.
flujo_nodered.json
Este archivo JSON contiene la configuración del flujo en Node-RED para la visualización de las señales procesadas. Sus funciones principales incluyen:

Interfaz Gráfica de Usuario (GUI): Despliega las señales en tiempo real mediante gráficos interactivos, facilitando el monitoreo continuo de ambas señales.
Conexión y Procesamiento: Recibe los datos procesados desde el Arduino (a través de una conexión serie, MQTT, o similar) y los presenta de forma clara.
Control y Personalización: Permite al usuario ajustar parámetros de visualización como el intervalo de actualización y los límites de escala de los gráficos.
