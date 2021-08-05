/*
 * sdcard.c
 *
 *  Created on: Aug 5, 2021
 *      Author: nap
 */
#include "sdcard.h"
#include "stdio.h"
#include "stdarg.h"
#include "string.h"

#define PRINTF_BUFF_SIZE 256

void uart_printf(UART_HandleTypeDef *huart, const char *fmt, ...)
{
	static char buffer[PRINTF_BUFF_SIZE];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buffer, sizeof(buffer), fmt, args);
	va_end(args);

	int len = strlen(buffer);
	HAL_UART_Transmit(huart, (uint8_t*)buffer, len, -1);
}
/*
 * Open the created PID.txt file
 * Read out the contents
 * If there is an error(file not exist or something else), keep the original values and don't change the PID params
 * returns:
 * 	0: OK
 * 	1: File not found error
 * 	2: Other error
 */
int sdcard_readPID(float *P, float *I, float *D)
{
	/*
	 * Steps:
	 * 1. open the file
	 * 2. read out the contents
	 * 3. copy the result to the function parameters
	 * 4. close the file
	 */
	return 0;
}
/*
 * Rewrite PID.txt file
 * If there is an error(file not exist or something else), keep the original values and don't change the PID params
 * returns:
 * 	0: OK
 * 	1: File not found error
 * 	2: Other error
 */
int sdcard_writePID(float *P, float *I, float *D)
{
	/*
	 * Steps:
	 * 1. Open the file for write
	 * 2. Write the parameters
	 * 3. Close the file
	 */
	return 0;
}

int log_buffered(const char* filename, const char *data, const int len)
{
	return 0;
}

int log_one(const char *filename, float *speed, float *error, float *actuator, float *steer, float *position)
{
	static char buffer[256];
	/* some conversion could be done here */
	sprintf(buffer, "%.2f,%.2f,%.2f,%.2f,%.2f\r\n", *speed, *error, *actuator, *steer, *position);
	/* file open etc. */
	return 0;
}


