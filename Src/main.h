/*
 * main.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Ashan
 */
#include <stdint.h>

#ifndef MAIN_H_
#define MAIN_H_

#define ADDR_AHB1ENR_REG 		((RCC_AHB1ENR_t*)0x40023830)
#define ADDR_GPIO_MODE_REG		((GPIOx_MODER_t*)0x40020400)
#define ADDR_GPIO_OUTPUT_REG	((GPIOx_ODR_t*)0x40020414)

#define CLOCK_ENABLE		1
#define GPIOB_MODE_CONF		1
#define PIN_STATE_HIGH 		1
#define PIN_STATE_LOW		0

void delay(uint32_t time);


typedef struct {

uint32_t	gpioa_en	:1;
uint32_t	gpiob_en	:1;
uint32_t	gpioc_en	:1;
uint32_t	gpiod_en	:1;
uint32_t	gpioe_en	:1;
uint32_t	gpiof_en	:1;
uint32_t	gpiog_en	:1;
uint32_t	gpioh_en	:1;
uint32_t	gpioi_en	:1;
uint32_t	gpioj_en	:1;
uint32_t	gpiok_en	:1;
uint32_t	reserved_1	:1;
uint32_t	crc_en		:1;
uint32_t	reserved_2	:5;
uint32_t	bkpsr_en	:1;
uint32_t	reserved_3	:1;
uint32_t	dtcmram_en	:1;
uint32_t	dma1_en		:1;
uint32_t	dma2_en		:1;
uint32_t	dma2d_en	:1;
uint32_t	reserved_4	:1;
uint32_t	ethmac_en	:1;
uint32_t	ethmactx_en	:1;
uint32_t	ethmacrx_en	:1;
uint32_t	ethmacptp_en:1;
uint32_t	otghs_en	:1;
uint32_t	otghsulpi_en:1;
uint32_t	reserved_5	:1;

}RCC_AHB1ENR_t;

typedef struct{

uint32_t pin0_mode	:2;
uint32_t pin1_mode	:2;
uint32_t pin2_mode	:2;
uint32_t pin3_mode	:2;
uint32_t pin4_mode	:2;
uint32_t pin5_mode	:2;
uint32_t pin6_mode	:2;
uint32_t pin7_mode	:2;
uint32_t pin8_mode	:2;
uint32_t pin9_mode	:2;
uint32_t pin10_mode	:2;
uint32_t pin11_mode	:2;
uint32_t pin12_mode	:2;
uint32_t pin13_mode	:2;
uint32_t pin14_mode	:2;
uint32_t pin15_mode	:2;

}GPIOx_MODER_t;

typedef struct{

uint32_t pin_0	:1;
uint32_t pin_1	:1;
uint32_t pin_2	:1;
uint32_t pin_3	:1;
uint32_t pin_4	:1;
uint32_t pin_5	:1;
uint32_t pin_6	:1;
uint32_t pin_7	:1;
uint32_t pin_8	:1;
uint32_t pin_9	:1;
uint32_t pin_10	:1;
uint32_t pin_11	:1;
uint32_t pin_12	:1;
uint32_t pin_13	:1;
uint32_t pin_14	:1;
uint32_t pin_15	:1;

}GPIOx_ODR_t;


#endif /* MAIN_H_ */
