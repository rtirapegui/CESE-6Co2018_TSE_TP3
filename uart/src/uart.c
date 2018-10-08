#include "uart.h"

#define MODE_8_BITS 	1
#define MODE_PAR_NONE	1
#define MODE_STOP_1_BIT	1

static uint32_t TxReg;
static uint32_t ModeReg;
static uint32_t BaudReg;

uint8_t Uart_ConfigureIO(void) {
	TxReg = 0;
	return 1;
}

uint8_t Uart_ConfigureMode(void) {
	ModeReg = MODE_8_BITS | MODE_PAR_NONE | MODE_STOP_1_BIT;
	return 1;	
}

uint8_t Uart_ConfigureBaudrate(uint32_t baudrate) {
	BaudReg = baudrate;
	return 1;
}
