/*
 * main.c
 *
 *  Created on: 22 Mar 2022
 *      Author: yusuf
 */

#include <stdint.h>
#include <stdio.h>

void waitKey();

int main()
{
	float n1, n2;

	// Receive 2 numbers from user
	printf("Please enter 2 numbers : ");

	if(scanf("%f", &n1) == 0){
		//Check if scanf failed or not
		printf("Invalid entry!");
		waitKey();
		return 0;
	}
	if(scanf("%f", &n2) == 0){
		//Check if scanf failed or not
		printf("Invalid entry!");
		waitKey();
		return 0;
	}


	//Print biggest of Two
	if (n1 == n2){
		printf("%.2f and %.2f are equals", n1, n2);
	}else if (n1 > n2){
		printf("%.2f is greater than %.2f ", n1, n2);
	}else
		printf("%.2f is less than %.2f ", n1, n2);

	waitKey();

	return 0;
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress enter key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}


