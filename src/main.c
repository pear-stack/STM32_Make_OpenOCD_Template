#include "main.h"

void dealy_ms(uint64_t delay){
	for(int i = 0; i < delay*169; i++){
	}
}

int main(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= 1 << 10;
	GPIOA->OSPEEDR |= 1 << 10;
	while(1) 
	{
		if((RCC->CFGR & RCC_CFGR_SWS) == 0)
			GPIOA->ODR |= 1 << 5;
		else
			GPIOA->ODR &= ~(1 << 5);
	}
}






