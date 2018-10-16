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

