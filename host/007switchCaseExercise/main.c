/*
 * main.c
 *
 *  Created on: 22 Mar 2022
 *      Author: yusuf
 */

#include <stdint.h>
#include <stdio.h>

//functions
void waitKey();


//CONSTANTS
const float pi = 3.14;

int main()
{
	uint8_t shapeCode;
	float area, height, d1, d2;

	printf("Area Calculation Program\n"
			"Circle    --> c\n"
			"Triangle  --> t\n"
			"Rectangle --> r\n"
			"Square    --> s\n"
			"Trapezoid --> z\n"
			"Enter the code here : ");

	if(scanf("%c", &shapeCode) == 0){
		printf("Invalid entry !\n");
		area = -1;
		waitKey();
		return 0;
	}

	switch(shapeCode){
	case 'c':
		//Circle
		printf("Enter radius : ");
		if(scanf("%f", &d1) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		area = pi * d1 * d1;
		break;
	case 't':
		//Triangle
		printf("Enter base : ");
		if(scanf("%f", &d1) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		printf("Enter height : ");
		if(scanf("%f", &height) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		area = (height * d1) / 2;
		break;
	case 'r':
		//Rectangle
		printf("Enter width : ");
		if(scanf("%f", &d1) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		printf("Enter height : ");
		if(scanf("%f", &height) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		area = height * d1;
		break;
	case 's':
		//Square
		printf("Enter base : ");
		if(scanf("%f", &d1) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		area = d1 * d1;
		break;
	case 'z':
		//Trapezoid
		printf("Enter base 1 : ");
		if(scanf("%f", &d1) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		printf("Enter base 2 : ");
		if(scanf("%f", &d2) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		printf("Enter height : ");
		if(scanf("%f", &height) == 0){
			printf("Invalid entry !\n");
			area = -1;
			waitKey();
			return 0;
		}
		area = (d1 * d2 * height) / 2;
		break;
	default:
		//Default statement
		printf("Invalid entry !\n");
		area = -1;
	}

	!(area < 0) ? printf("Area of %c is %.2f\n", shapeCode, area) : printf("Invalid input resulting error\n");

	waitKey();
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress enter key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}
