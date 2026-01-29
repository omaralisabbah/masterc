
#ifndef _GPIO_H
#define _GPIO_H


typedef struct {
    unsigned int pin_number;
    void (* ptr)(void); // Function Address
}gpio_t;

void gpio_write_5volt(gpio_t *gpio_obj);
void gpio_write_0volt(gpio_t *gpio_obj);
#endif // _GPIO_H
