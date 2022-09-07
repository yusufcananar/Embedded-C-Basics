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

	printf("Please enter an integer number : ");
	if(scanf("%d", &num) == 0){
		printf("Invalid entry !\n");
		waitKey();
		return 0;
	}

	if (num & 1)
		printf("%d is an ODD number\n", num);
	else
		printf("%d is an EVEN number\n", num);


	waitKey();
	return 0;
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress 'Enter' key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}
