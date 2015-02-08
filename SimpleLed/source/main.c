/****************************************************************************
* Filename:    main.c
* Author:      BPI
* Date:        2015-02-08
* Version:     1.0
* Description: Simple LED
****************************************************************************/

#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x.h"


void main(void){
  int i, j;
  GPIO_InitTypeDef GPIO_InitStructure;

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
  GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_1;
  GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP; 
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
  GPIO_Init(GPIOA, &GPIO_InitStructure);
  
  do{
    for(i = 0;i < 0xFFFFF;i++){
    
    }
    if(j){
      j = 0x0;
      GPIOA->BSRR = GPIO_Pin_1;
    }else{
      j = 0x1;
      GPIOA->BRR  = GPIO_Pin_1;
    }
  }while(1);
}