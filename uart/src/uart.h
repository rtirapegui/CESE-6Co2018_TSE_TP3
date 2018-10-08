#include <stdint.h>

uint8_t Uart_ConfigureIO(void);
uint8_t Uart_ConfigureMode(void);
uint8_t Uart_ConfigureBaudrate(uint32_t baudrate);
uint32_t Uart_TransmitString(uint8_t *string);
