Este proyecto incluye dos archivos de código principales:

Un archivo de código para Arduino encargado del procesamiento y acoplamiento digital de dos señales.
Un flujo de Node-RED que crea una interfaz gráfica para la visualización de las señales procesadas.
Estructura de Archivos
FACTOR_DE_POTENCIA.ino: Código fuente para Arduino.
TesisNode.json: Configuración del flujo en Node-RED para visualización.

FACTOR_DE_POTENCIA.ino
Este archivo de código para Arduino realiza el procesamiento y acoplamiento digital de dos señales de entrada analógicas.
Lectura de Señales: Lee dos señales analógicas provenientes de sensores o dispositivos de medición.
Digitalización y Filtrado: Aplica técnicas de digitalización y filtrado para obtener datos estables y evitar ruido en las señales.
Procesamiento de Señales: Efectúa operaciones de sincronización y acoplamiento para que ambas señales puedan analizarse conjuntamente.

TesisNode.json
Este archivo JSON contiene la configuración del flujo en Node-RED para la visualización de las señales procesadas. Sus funciones principales incluyen:
Interfaz Gráfica de Usuario (GUI): Despliega las señales en tiempo real mediante gráficas, facilitando el monitoreo continuo de ambas señales, así como widgets para la visualización de los valores de potencia, desfasamiento y factor de potencia.
Conexión y Procesamiento: Recibe los datos procesados desde el Arduino mediante comunicación UART y los presenta de forma clara.
