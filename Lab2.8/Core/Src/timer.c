/*
 * timer.c
 *
 *  Created on: Oct 10, 2022
 *      Author: ADMIN
 */
#include "timer.h"

//counter to change the frequency of 4 seven segment leds to 1Hz
const int COUNTER_SCAN_1HZ = 25;
int timer7seg_counter = 0;
int timer7seg_flag = 0;
int timerClock_counter = 0;
int timerClock_flag = 0;
int timerDOT_counter = 0;
int timerDOT_flag = 0;
int timerMatrix_flag = 0;
int timerMatrix_counter = 0;
int TIMER_CYCLE = 10;

void setTimerClock(int duration){
	timerClock_counter = duration / TIMER_CYCLE;
	timerClock_flag = 0;
}

void setTimerDOT(int duration){
	timerDOT_counter = duration / TIMER_CYCLE;
	timerDOT_flag = 0;
}

void setTimer7SEG(int duration){
	timer7seg_counter = duration / TIMER_CYCLE;
	timer7seg_flag = 0;
}

void setTimerMaxtrix(int duration){
	timerMatrix_counter = duration / TIMER_CYCLE;
	timerMatrix_flag = 0;
}

void timerRun(){
	if (timerClock_counter > 0){
		timerClock_counter--;
		if (timerClock_counter == 0) timerClock_flag = 1;
	}
	if (timerDOT_counter > 0){
		timerDOT_counter--;
		if (timerDOT_counter == 0) timerDOT_flag = 1;
	}
	if (timer7seg_counter > 0){
		timer7seg_counter--;
		if (timer7seg_counter == 0) timer7seg_flag = 1;
	}
	if (timer7seg_counter > 0){
		timerMatrix_counter--;
		if (timerMatrix_counter == 0) timerMatrix_flag = 1;
	}
}

