/*
	10 Structures: 18 Pointer To Function As Struct Element


*/

#include <stdio.h>
#include <stdlib.h>
#include "gpio.h"

gpio_t gpio_1;

int main() {
	printf("18 Structures: 18 Pointer To Function As Struct Element \n");
	printf("------------------------------------------------------- \n");

	gpio_1.pin_number =11;
	gpio_1.ptr = GPIO_NOTIFICATION;

	gpio_write_5volt(&gpio_1);
	gpio_write_0volt(&gpio_1);

	return 0;
}


void GPIO_NOTIFICATION(void) {
    printf("Do Your Request \n");
}