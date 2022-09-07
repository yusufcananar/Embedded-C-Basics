/*
 * main.c
 *
 *  Created on: 22 Mar 2022
 *      Author: yusuf
 */

#include <stdint.h>
#include <stdio.h>

void waitKey();
float get_tax(float, float);

int main()
{
	float income, tax;

	printf("Please enter your total income : ");
	if(scanf("%f", &income) == 0){
		printf("Invalid entry !\n");
		waitKey();
		return 0;
	}

	if(income < 0){
		printf("Income cannot be negative !\n");
		waitKey();
		return 0;
	}

	if (income <= 9525){
		tax = 0;
	}else if(income >= 9526 && income <= 38700){
		tax = 12;
	}else if(income >= 38701 && income <= 82500){
		tax = 22;
	}else if(income >= 82501){
		tax = 32;
	}

	if(tax != 32)
		printf("Tax is %.2f$", get_tax(income, tax));
	else
		printf("Tax is %.2f$", get_tax(income, tax)+1000);

	waitKey();
}

float get_tax(float income,float tax_rate){
	float tax = income * (tax_rate / 100);
	return tax;
}
void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress enter key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}
