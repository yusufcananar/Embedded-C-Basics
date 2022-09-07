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
	int16_t num1, num2;
	printf("Size of int16_t and short is %I64d and %I64d\n", sizeof(int16_t), sizeof(short));
	printf("Please enter two integer numbers : ");
	if(scanf("%hi %hi", &num1, &num2) == 0){
		printf("Invalid entry !\n");
		waitKey();
		return 0;
	}

	printf("Bitwise AND --> %hi and %hi is %d\n", num1, num2, num1&num2);
	printf("Bitwise OR  --> %hi or %hi is %d\n", num1, num2, num1|num2);
	printf("Bitwise XOR --> %hi xor %hi is %d\n", num1, num2, num1^num2);
	printf("Bitwise NOT --> not %hi is %hi\n\t\tnot %hi is %hi\n", num1, ~num1, num2, ~num2);

	waitKey();
	return 0;
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress 'Enter' key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}
