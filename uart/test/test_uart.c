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