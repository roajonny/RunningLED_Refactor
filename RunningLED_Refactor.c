#include "stm32f4xx.h"                  // Device header
//PA8
//PB5
//PA9
//PA10
//PC13 pushbutton
//CLOCK ACCESS
//Ports A, B
//Code refactored to perform same function on pressing of pushbutton
void delay(int n) {
	while (n > 0) {
		n--;
	}
}

int main(void) {
	
	RCC->AHB1ENR |= 0x7;				//A, B, C clock enabled
	GPIOA->MODER |= 0x150000;		//PA output
	GPIOB->MODER |= 0x440;			//PB output
	GPIOC->
	
	while (1) {
		GPIOA->BSRR |= 0x100;			//PA8 ON
		delay(400000);
		GPIOA->BSRR |= 0x1000000; //PA8 OFF
		GPIOB->BSRR |= 0x20;			//PB5 ON
		delay(400000);
		GPIOB->BSRR |= 0x200000;	//PB5 OFF
		GPIOA->BSRR |= 0x200;			//PA9 ON
		delay(400000);
		GPIOA->BSRR |= 0x2000000;	//PA9 OFF
		GPIOA->BSRR |= 0x400;			//PA10 ON
		delay(400000);
		GPIOA->BSRR |= 0x4000000;	//PA10 OFF
	 }
 }