

#include <stdint.h>
#include "main.h"




int main(void)
{

	RCC_AHB1ENR_t volatile *const pPCLKENR 		= ADDR_AHB1ENR_REG;
	GPIOx_MODER_t volatile *const pPModeReg 	= ADDR_GPIO_MODE_REG;
	GPIOx_ODR_t volatile *const pOutDtReg    	= ADDR_GPIO_OUTPUT_REG;

// CLK enbale and gpio set as a output
	pPCLKENR->gpiob_en   	= CLOCK_ENABLE;
	pPModeReg->pin0_mode 	= GPIOB_MODE_CONF;
	pPModeReg->pin7_mode 	= GPIOB_MODE_CONF;
	pPModeReg->pin14_mode 	= GPIOB_MODE_CONF;




while(1){

	pOutDtReg->pin_0 	= PIN_STATE_HIGH;
	delay(1000000);
	pOutDtReg->pin_7 	= PIN_STATE_HIGH;
	delay(1000000);
	pOutDtReg->pin_14 	= PIN_STATE_HIGH;

	delay(1000000);

	pOutDtReg->pin_0 	= PIN_STATE_LOW;
	delay(1000000);
	pOutDtReg->pin_7 	= PIN_STATE_LOW;
	delay(1000000);
	pOutDtReg->pin_14 	= PIN_STATE_LOW;

	delay(1000000);



}
}


void delay(uint32_t time){

	for(uint32_t i =0; i<time; i++){}


}
