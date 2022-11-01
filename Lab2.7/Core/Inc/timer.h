
#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern const int COUNTER_SCAN_1HZ;
extern int timer7seg_counter;
extern int timer7seg_flag;
extern int timerClock_counter;
extern int timerClock_flag;
extern int timerDOT_counter;
extern int timerDOT_flag;
extern int timerMatrix_flag;
extern int timerMatrix_counter;
extern  int TIMER_CYCLE;

void setTimerClock(int duration);

void setTimerDOT(int duration);

void setTimer7SEG(int duration);

void setTimerMaxtrix(int duration);

void timerRun();

#endif /* INC_TIMER_H_ */
