#ifndef _BSP_LED_H_
#define _BSP_LED_H_

#include "stm8s.h"

#define LED_PORT      GPIOA
#define LED_PIN       GPIO_PIN_3
#define LED_SET(X)    ((X)?(GPIO_WriteHigh(LED_PORT,LED_PIN)):GPIO_WriteLow(LED_PORT,LED_PIN))





void Led_Init(void);

#endif


