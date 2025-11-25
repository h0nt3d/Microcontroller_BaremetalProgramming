#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "ports.h"

#define DELAY_MS	1000

void app_main(void)
{
	volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG;
	volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG;
	volatile uint32_t* gpio_enable_reg = (volatile uint32_t*) GPIO_ENABLE_REG ;

	*gpio_enable_reg = (1 << GPIO5);
	*gpio_out_w1tc_reg = (1 << GPIO5);

	while (1) {
		*gpio_out_w1ts_reg = (1 << GPIO5);
		vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
		*gpio_out_w1tc_reg = (1 << GPIO5);
		vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
	}
}

