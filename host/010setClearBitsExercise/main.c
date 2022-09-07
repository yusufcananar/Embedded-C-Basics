/*
 * main.c
 *
 *  Created on: 31 Mar 2022
 *      Author: yusuf
 */

#include<stdio.h>
#include<stdint.h>

//function defs
void waitKey(void);

int main()
{
	int32_t num;
	int32_t setter_mask = 0x90;
	int32_t clear_mask = 0x70;

	printf("Please enter an integer number : ");
	if(scanf("%d", &num) == 0){
		printf("Invalid entry !\n");
		waitKey();
		return 0;
	}

	//Setting
	printf("4th and 7th bits set to 1 resulting : 0x%x\n", num | setter_mask);

	//Clearing
	printf("4th, 5th and 6th bits cleared resulting : 0x%x\n", num & ~(clear_mask));

	waitKey();
	return 0;
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress 'Enter' key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}
