#include "unity.h"
#include "uart.h"

void setUP(void) {

}

void tearDown(void) {

}

void test_ConfigureUARTIO(void) {
	uint32_t UartReg = 0xFFFFFFFF;

	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO(&UartReg));
	TEST_ASSERT_EQUAL_HEX32(0xFFFFFFFE, UartReg);
}

void test_ConfigureUARTMode(void) {
	uint32_t UartReg = 0xFFFFFFFF;
	enum data_mode {
		FIVE_BITS = 0x00,
		SIX_BITS,
		SEVEN_BITS,
		EIGHT_BITS
	};

	enum parity_mode {
		NONE = 0x00,
		ODD,
		EVEN
	};

	enum stop_mode {
		ONE_BIT = 0x00,
		ONE_AND_HALF_BITS,
		TWO_BITS
	};

	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO(&UartReg));
	TEST_ASSERT_EQUAL(1, Uart_ConfigureMode(EIGHT_BITS, NONE, ONE_BIT));
	TEST_ASSERT_EQUAL_HEX32(0xFFFFFC3E, UartReg);
}

void test_ConfigureUARTBaudrate(void) {
	uint32_t UartReg = 0xFFFFFFFF;
	enum data_mode {
		FIVE_BITS = 0x00,
		SIX_BITS,
		SEVEN_BITS,
		EIGHT_BITS
	};

	enum parity_mode {
		NONE = 0x00,
		ODD,
		EVEN
	};

	enum stop_mode {
		ONE_BIT = 0x00,
		ONE_AND_HALF_BITS,
		TWO_BITS
	};

	enum baud {
		BAUD_2400 = 0x00,
		BAUD_4800,
		BAUD_9600, 
		BAUD_38400,
		BAUD_57600,
		BAUD_115200,
		BAUD_128000,
		BAUD_256000
	};

	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO(&UartReg));
	TEST_ASSERT_EQUAL(1, Uart_ConfigureMode(EIGHT_BITS, NONE, ONE_BIT));
	TEST_ASSERT_EQUAL(1, Uart_ConfigureBaudRate(BAUD_115200));
	TEST_ASSERT_EQUAL_HEX32(0xFFFFDC3E, UartReg);
}

void test_TransmitString(void) {
	uint32_t UartReg = 0xFFFFFFFF;
   uint8_t string[] = {'H', 'O', 'L', 'A', '\0'};
 
	enum data_mode {
		FIVE_BITS = 0x00,
		SIX_BITS,
		SEVEN_BITS,
		EIGHT_BITS
	};

	enum parity_mode {
		NONE = 0x00,
		ODD,
		EVEN
	};

	enum stop_mode {
		ONE_BIT = 0x00,
		ONE_AND_HALF_BITS,
		TWO_BITS
	};

	enum baud {
		BAUD_2400 = 0x00,
		BAUD_4800,
		BAUD_9600, 
		BAUD_38400,
		BAUD_57600,
		BAUD_115200,
		BAUD_128000,
		BAUD_256000
	};

	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO(&UartReg));
	TEST_ASSERT_EQUAL(1, Uart_ConfigureMode(EIGHT_BITS, NONE, ONE_BIT));
	TEST_ASSERT_EQUAL(1, Uart_ConfigureBaudRate(BAUD_115200));
	TEST_ASSERT_EQUAL(sizeof(string) - 1, Uart_TransmitString(string));
	TEST_ASSERT_EQUAL_HEX32(0x0041DC3E, UartReg);	/* Expected last sent byte in register */
}


