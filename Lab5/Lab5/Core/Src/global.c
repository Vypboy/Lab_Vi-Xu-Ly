/*
 * global.c
 *
 *  Created on: Oct 24, 2022
 *      Author: ADMIN
 */

#include "global.h"

#define MAX_BUFFER_SIZE 30
uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
uint32_t ADC_value=0;
int status=0;

