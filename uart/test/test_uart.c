#include "unity.h"

void setUP(void) {

}

void tearDown(void) {

}

void test_ConfigureUARTIO(void) {
	TEST_ASSERT_EQUAL(1, Uart_ConfigureIO());
}
