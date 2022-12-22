/*
 * uart_fsm.c
 *
 *  Created on: Dec 12, 2022
 *      Author: ADMIN
 */
#include "uart_fsm.h"
#include "main.h"
#include "global.h"
#include <stdio.h>


char str[20];

void resetbuffer(){
	for(int i=0;i<MAX_BUFFER_SIZE;i++){
		buffer[i]=0;
	}
	index_buffer = 0;
}

void command_parser_fsm(){
	if(index_buffer>=5){
		  if(buffer[0]=='!' && buffer[1]=='R' && buffer[2]=='S' && buffer[3]=='T' && buffer[4]=='#'){
			  status=1;
		  }
		  else resetbuffer();
	}
	 else if(index_buffer<=4){
		  if(buffer[0]=='!' && buffer[1]=='O' && buffer[2]=='K' && buffer[3]=='#'){
			  status=2;
		  }
	 }

	  HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_RED_Pin);
}
void uart_communiation_fsm(){
	  switch(status){
		  case RST_CASE:
			  if(buffer[5]==13){
				  ADC_value= HAL_ADC_GetValue(&hadc1);
				  resetbuffer();
				  status=3;
			  }
			  break;
		  case OK_CASE:
			  if(buffer[4]==13) resetbuffer();
			  if(timer1_flag == 1){
				  setTimer1(3000);
				  status=3;
			  }
			  break;
		  case TRANSMIT_CASE:
			  if(timer1_flag == 1){
				  setTimer1(1000);
				  HAL_UART_Transmit(&huart2, (void *)str, sprintf(str, "%ld\r\n", ADC_value), 50);
			  }
			  break;
		  default:
			  break;
	  }
}


