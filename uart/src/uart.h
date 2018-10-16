#include <stdint.h>

uint8_t Uart_ConfigureIO(uint32_t *uartReg);
uint8_t Uart_ConfigureMode(uint8_t dataBitsMode, uint8_t parityBitsMode, uint8_t stopBitsMode);
uint8_t Uart_ConfigureBaudRate(uint8_t baudrateBits);
uint32_t Uart_TransmitString(uint8_t *string);
