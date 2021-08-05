/*
 * sdcard.h
 *
 *  Created on: Aug 5, 2021
 *      Author: nap
 */

#ifndef INC_SDCARD_H_
#define INC_SDCARD_H_
#include "stm32f4xx_hal.h"
void uart_printf(UART_HandleTypeDef *huart, const char *fmt, ...);
#endif /* INC_SDCARD_H_ */
