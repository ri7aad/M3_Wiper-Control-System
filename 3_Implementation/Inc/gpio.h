/*
 * gpio.h
 *
 *      Author: DELL
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_


#include "stm32f4xx.h"
void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed);
void gpiox_set(GPIORegDef *gpiox, int pin);
void gpiox_clear(GPIORegDef *gpiox, int pin);
void gpiox_write(GPIORegDef *gpiox, int pin, int value);
void gpiox_toggle(GPIORegDef *gpiox, int pin);

#endif /* INC_GPIO_H_ */
