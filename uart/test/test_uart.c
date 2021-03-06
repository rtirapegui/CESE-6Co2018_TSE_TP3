#include "unity.h"
#include "uart.h"

void setUP(void) {

}

void tearDown(void) {

}

void test_ConfigureUARTIO(void) {
	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO());
}

void test_ConfigureMode(void) {
	TEST_ASSERT_EQUAL(1, Uart_ConfigureMode());
}

void test_ConfigureBaudRate(void) {
	TEST_ASSERT_EQUAL(1, Uart_ConfigureBaudrate(115200));
}

void test_TrasnmitString(void) {
	uint8_t string[] = {'H', 'O', 'L', 'A', '\0'};

	TEST_ASSERT_EQUAL(4, Uart_TransmitString(string));
}