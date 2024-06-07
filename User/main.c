#include <stdint.h>
#include "stm32f10x.h"

#include "bsp_led.h"

void delay_us(uint32_t us)
{
	volatile uint32_t i;
	volatile uint32_t j;
	
	for (i = 0; i < us; i++) {
		j = 11;
		while (j != 0) {
			j--;
		}
	}
}

int main(void)
{
	InitGPIO();

	while (1) {
		R();
		delay_us(300 * 1000);
		G();
		delay_us(300 * 1000);
		B();
		delay_us(300 * 1000);
	}

	return 0;
}