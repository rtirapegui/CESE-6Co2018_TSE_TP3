# CESE-6Co2018_TSE_TP3

Este repositorio muestra la implementación de la metodología de Test Driven Development en la implementación de un driver de UART para transimisión de datos al módulo transmisor LF 125 KHz modelo RDM6300.
 
 ###REQUERIMIENTOS###

- Maneja la uart0 del microcontrolador EFM32HG
- Al iniciar el procesador no hay un estado conocido del hardware de la UART, por lo que debe ser reiniciado y Tx debe ser colocado en 0
- Debe operar bajo la configuracion 8N1 (ocho (8) bits de datos, ningun (N) bit de paridad y un (1) bit de parada). 
- El baudrate debe poder ser configurado por el usaurio
- Deben enviarse los caracteres como string con '\0' como terminador
