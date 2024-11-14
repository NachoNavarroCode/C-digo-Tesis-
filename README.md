This project includes two main code files:

An Arduino code file responsible for the digital processing and coupling of two signals.
A Node-RED flow that creates a graphical interface for visualizing the processed signals.
File Structure
ECMD.ino: Source code for Arduino.
TesisNode.json: Node-RED flow configuration for visualization.
ECMD.ino
This Arduino code file performs digital processing and coupling of two analog input signals.

Signal Reading: Reads two analog signals from sensors or measurement devices.
Digitization and Filtering: Applies digitization and filtering techniques to ensure stable data and minimize signal noise.
Signal Processing: Carries out synchronization and coupling operations to enable joint analysis of both signals.
TesisNode.json
This JSON file contains the configuration of the Node-RED flow for visualizing processed signals. Its primary functions include:

Graphical User Interface (GUI): Displays signals in real time using graphs, facilitating continuous monitoring of both signals, as well as widgets for viewing power values, phase shift, and power factor.
Data Connection and Processing: Receives processed data from the Arduino via UART communication and presents it in a clear format.
