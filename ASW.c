#include "general.h"
#include "ASW.h"
#include "encoder.h"
#include "mcal_interrupts.h"

void TestLinie()
{
	T_U8 read,a=0;
	read=RTE_LF_u8ReadPins();	
	//------Urmarire linie------//
	switch(read){
		case 0b110000://left
			a=70;
		break;
		case 0b011000://left --
			a=80;
		break;
		case 0b001100://mid
			a=90;
		break;
		case 0b000110://right--
			a=110;
		break;
		case 0x000011://right
			a=120;
		break;
		case 0x00://no line
			a=90;
		break;
		default:
            break;
	}
	RTE_vServoSetAngle(a);
}
/*
	if(read ==0b00110000) //vireaza stanga
		{
			SetDir(73);
		}
		else
		if(read ==0x0A)//inainte
		{
			SetDir(90);
		}
		else
		if(read ==0x03)//dreapta
		{
			SetDir(107);
		}
		else
		if(read ==0x05)//dreapta jumate
		{
			SetDir(100);
		}
		else
		if(read ==0x18)//stanga jumate
		{
			SetDir(80);
		}
		else
		if(read==0x0C)
		{		
			SetDir(90);
		}
		*/

void Aplication()
{
	//int i;
	//T_U8 u8Dir=INAINTE;
	T_U8 u8Speed=0;
	//T_U16 lf;
    
   
    
    if(get_FlagObst()==FALSE)
    { 
        u8Speed=30;
        RTE_vSetMotorSpeed(u8Speed);
        TestLinie();
    }
    else
    {
        
        u8Speed=0;
        RTE_vSetMotorSpeed(u8Speed);
    } 
    //T_S16 deplasare;
    //deplasare=QEI_s16getElapsed();
    
    
}