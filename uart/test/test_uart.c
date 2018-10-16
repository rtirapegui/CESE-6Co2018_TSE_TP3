#include "unity.h"

void setUP(void) {

}

void tearDown(void) {

}

void test_ConfigureUARTIO(void) {
	uint32_t UartReg = 0xFFFFFFFF;

	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO(&UartReg));
	TEST_ASSERT_EQUAL_HEX32(0xFFFFFFFE, UartReg);
}
