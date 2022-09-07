/*
 * main.c
 *
 *  Created on: 22 Mar 2022
 *      Author: yusuf
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
	uint16_t age;

	//Asks user's age
	printf("What is your age? : ");
	scanf("%hu", &age);

	// Chech if user can vote
	if (age >= 18)
		printf("You can vote!");

	else if (age < 18)
		printf("Your age under 18, you cannot vote!");

	else
		printf("Invalid entry or unexpected process");

	//Exit Section with wait KEY
	printf("\nPress enter key to EXIT");
	while(getchar() != '\n'){};
	getchar();

	return 0;
}
