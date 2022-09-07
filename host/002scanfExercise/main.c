/*
 * main.c
 *
 *  Created on: 20 Mar 2022
 *      Author: yusuf
 */

#include<stdio.h>

int main()
{
	char n1, n2, n3, n4, n5, n6;

	printf("Enter 6 characters of your choice : ");

	scanf("%c %c %c %c %c %c", &n1, &n2, &n3, &n4, &n5, &n6);

	/*
	n1 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	n2 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	n3 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	n4 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	n5 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	n6 = getchar();
	getchar(); 		//this getchar is used to clear the special character
	*/

	printf("\nASCII codes : %u, %u, %u, %u, %u, %u", n1, n2, n3, n4, n5, n6);

	printf("\nPress enter key to EXIT");

	while(getchar() != '\n'){/*just read the input buffer and do nothing*/};

	getchar();

}

