#include "uart.h"

static union UARTRegister {
	struct {
		uint8_t IO_BIT:				 1;
		uint8_t RESERVED_1:		    3;
		uint8_t DATA_BITS_MODE:		 2;
		uint8_t PARITY_BITS_MODE:	 2;
		uint8_t STOP_BITS_MODE:		 2;
		uint8_t RESERVED_2:			 2;
		uint8_t BAUDRATE_BITS:		 3;
		uint32_t RESERVED:			17;
	} bf;
	uint32_t word;
} *UARTReg;

uint8_t Uart_ConfigureIO(uint32_t *uartReg) {
	UARTReg = (union UARTRegister *) uartReg;
	UARTReg->bf.IO_BIT = 0;
	return 1;
}

uint8_t Uart_ConfigureMode(uint8_t dataBitsMode, uint8_t parityBitsMode, uint8_t stopBitsMode) {
	UARTReg->bf.DATA_BITS_MODE = dataBitsMode;
	UARTReg->bf.PARITY_BITS_MODE = parityBitsMode;
	UARTReg->bf.STOP_BITS_MODE = stopBitsMode;
	return 1;
}

uint8_t Uart_ConfigureBaudRate(uint8_t baudrateBits) {
	UARTReg->bf.BAUDRATE_BITS = baudrateBits;
	return 1;
}
