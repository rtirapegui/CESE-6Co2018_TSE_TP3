#include <stdint.h>

uint8_t Uart_ConfigureIO(uint32_t *uartReg);
uint8_t Uart_ConfigureMode(uint8_t dataBitsMode, uint8_t parityBitsMode, uint8_t stopBitsMode);
