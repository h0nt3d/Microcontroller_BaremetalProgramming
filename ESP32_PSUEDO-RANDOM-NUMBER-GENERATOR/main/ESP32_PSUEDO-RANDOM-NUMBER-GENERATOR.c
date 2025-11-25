#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include <time.h>
#include "ports.h"

#define DELAY_MS 	1000

void app_main(void)
{
	volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG;
	volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG;
	volatile uint32_t* gpio_enable_reg = (volatile uint32_t*) GPIO_ENABLE_REG;

	*(gpio_enable_reg) = (1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | (1 << GPIO_PIN_5) | 
				(1 << GPIO_PIN_16) | (1 << GPIO_PIN_17) | (1 << GPIO_PIN_18) | 
				(1 << GPIO_PIN_19);


	char num;
	srand(time(0));

	while (1) {
		num = rand() % 10;
		if (num == 0) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | (1 << GPIO_PIN_5) | 
				(1 << GPIO_PIN_16) | (1 << GPIO_PIN_17) | (1 << GPIO_PIN_18));
		}
		else if (num == 1) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_4) | (1 << GPIO_PIN_5));
		}
		else if (num == 2) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_16) | (1 << GPIO_PIN_17) | (1 << GPIO_PIN_19));
		}
		else if (num == 3) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_19) | (1 << GPIO_PIN_5) | (1 << GPIO_PIN_16));
		}
		else if (num == 4) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_5) | (1 << GPIO_PIN_18) | (1 << GPIO_PIN_19));
		}
		else if (num == 5) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_5) | 
				(1 << GPIO_PIN_16) | (1 << GPIO_PIN_18) | (1 << GPIO_PIN_19));
		}
		else if (num == 6) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_17) | 
				(1 << GPIO_PIN_5) | (1 << GPIO_PIN_16) | (1 << GPIO_PIN_18) | 
				(1 << GPIO_PIN_19));
		}
		else if (num == 7) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_5));
		}
		else if (num == 8) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_5) | (1 << GPIO_PIN_16) | (1 << GPIO_PIN_17) | 
				(1 << GPIO_PIN_18) | (1 << GPIO_PIN_19));
		}
		else if (num == 9) {
			*(gpio_out_w1ts_reg) = ~((1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | 
				(1 << GPIO_PIN_5) | (1 << GPIO_PIN_16) | (1 << GPIO_PIN_19) |
				(1 << GPIO_PIN_18));
		}
		vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
		
		//Reset
		*gpio_out_w1tc_reg = (1 << GPIO_PIN_2) | (1 << GPIO_PIN_4) | (1 << GPIO_PIN_5) | 
			(1 << GPIO_PIN_16) | (1 << GPIO_PIN_17) | (1 << GPIO_PIN_18) | (1 << GPIO_PIN_19);

	}
}

