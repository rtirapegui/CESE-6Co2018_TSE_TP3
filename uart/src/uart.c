#include "uart.h"

#define IO_BIT_MASK	0x00000001

uint8_t Uart_ConfigureIO(uint32_t *uartReg) {
	*uartReg &= ~IO_BIT_MASK;
	return 1;
}

uint8_t Uart_ConfigureMode(uint8_t dataBitsMode, uint8_t parityBitsMode, uint8_t stopBitsMode) {

}
