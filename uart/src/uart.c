#include "uart.h"

static uint32_t TxReg;
 
uint8_t Uart_ConfigureIO(void) {
	TxReg = 0;
	return 1;
}
