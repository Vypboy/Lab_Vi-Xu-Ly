/*
 * Display.c
 *
 *  Created on: Oct 25, 2022
 *      Author: ADMIN
 */

#include "Display.h"
#include "main.h"
#include "global.h"
#include "Software_timer.h"


void redtest(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void yellowtest(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void greentest(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}

void red1display(){
	HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
}
void red2display(){
	HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
}
void red3display(){
	HAL_GPIO_TogglePin(RED3_GPIO_Port, RED3_Pin);
}
void red4display(){
	HAL_GPIO_TogglePin(RED4_GPIO_Port, RED4_Pin);
}
void red5display(){
	HAL_GPIO_TogglePin(RED5_GPIO_Port, RED5_Pin);
}


