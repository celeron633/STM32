#include <stdint.h>
#include "stm32f10x.h"

#include "bsp_led.h"
#include "delay.h"

int main(void)
{
	InitLedGPIO();

	while (1) {
		R();
		delay_us(100 * 1000);
		G();
		delay_us(100 * 1000);
		B();
		delay_us(100 * 1000);
	}

	return 0;
}
