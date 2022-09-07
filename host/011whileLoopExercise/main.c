/*
 * main.c
 *
 *  Created on: 5 Apr 2022
 *      Author: yusuf
 */

#include<stdio.h>
#include<stdint.h>

//function defs
void waitKey(void);

int main()
{
	int16_t start, end;
	uint16_t counter = 0;

	printf("Please enter start and end numbers(int) (give space between nos) : ");
		if(scanf("%hd %hd", &start, &end) == 0){
			printf("Invalid entry !\n");
			waitKey();
			return 0;
		}

	while(start <= end){
		if((start % 2) == 0){
			printf(" %4hd ", start++);
			counter++;
		}else{
			start++;
			continue;
		}
	}

	printf("\nTotal count of even numbers between start and end is %hd", counter);


	waitKey();
	return 0;
}

void waitKey(){
	//Exit Section with wait KEY
	printf("\nPress 'Enter' key to EXIT..");
	while(getchar() != '\n'){};
	getchar();
}


