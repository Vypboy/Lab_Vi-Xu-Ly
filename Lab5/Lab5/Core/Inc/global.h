/*
 * global.h
 *
 *  Created on: Oct 24, 2022
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "Software_timer.h"
#include "main.h"

#define RST_CASE       1
#define OK_CASE        2
#define TRANSMIT_CASE  3


#define MAX_BUFFER_SIZE 30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint32_t ADC_value;

int status;


#endif /* INC_GLOBAL_H_ */
