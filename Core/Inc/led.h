/*
 * led.h
 *
 *  Created on: 2026年11月14日
 *      Author: asdas
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"

/* 8 颗 LED 接 PD0~PD7，低电平点亮 */
#define LED_PORT      GPIOD
#define LED_ALL_MASK  0x00FFu

void led_show(uint8_t mask);      /* bit=1 表示该灯亮 */
void leds_off(void);             //初始状态：灯全灭
void run_water(uint32_t ms);     //流水灯
void run_pingpong(uint32_t ms);   //来回跑
void run_accumulate(uint32_t ms);  //全亮然后逐个灭
void run_odd_even(uint32_t ms);    //奇偶交替
void run_binary(uint32_t ms);      //二进制亮

#endif /* LED_H */

#endif /* INC_LED_H_ */
