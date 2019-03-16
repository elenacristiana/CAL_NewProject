/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "hal_servo.h"
#include "hal_motor.h"
#include "ASW.h"
#include "encoder.h"
T_S16 deplasare;

void TASK_Inits()
{
	RTE_vMotorInit();
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
}

void TASK_1ms()
{
	
}

void TASK_5ms()
{
    Aplication();
}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    
}

void TASK_500ms()
{ 
	
	//T_F16 val = batteryLevel();
}

void TASK_1000ms()
{
	//deplasare=QEI_s16getElapsed();

}