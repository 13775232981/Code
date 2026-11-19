#include "stm32f10x.h"
#include "delay.h"

int main(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
	
	GPIO_Init(GPIOA, &GPIO_InitStruct);
	
	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);//写1
	
//	GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_RESET);//写0
	
//	while(1)
//	{
//		GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_RESET);//亮
//		
//		Delay(100);//延迟100ms
//		
//		GPIO_WriteBit(GPIOC,GPIO_Pin_13,Bit_SET);//熄灭
//		
//		Delay(100);
//	}
}