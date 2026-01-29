
#include "gpio.h"

void gpio_write_5volt(gpio_t *gpio_obj) {
    printf("GPIO Pin Number %i is (on) \n", gpio_obj->pin_number);
    gpio_obj->ptr(); // Indirect call
}


void gpio_write_0volt(gpio_t *gpio_obj) {
    printf("GPIO Pin Number %i is (off) \n", gpio_obj->pin_number);
}
