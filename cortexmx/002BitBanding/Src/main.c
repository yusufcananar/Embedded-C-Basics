/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#define ALIAS_BASE_ADDR 0x22000000U
#define BITBAND_BASE_ADDR 0x20000000U
int main(void)
{
	uint8_t *ptr = (uint8_t *)0x20000200; //bitband memory addr

	*ptr = 0xFF;

	//NORMAL METHOD to change 7th bit position
	//Clear the 7th bit position
	*ptr &= ~(1 << 7);

	//Reset back
	*ptr = 0xFF;

	//BITBANDING METHOD to change 7th bit position
	uint8_t *alias_addr =(uint8_t *) (ALIAS_BASE_ADDR + (32 * (0x20000200 - BITBAND_BASE_ADDR)) + 7 * 4);

	//clearing 7th bit of addr 0x20000200
	*alias_addr = 0;

    /* Loop forever */
	for(;;);
}