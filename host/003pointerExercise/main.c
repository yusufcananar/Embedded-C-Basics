/*
 * main.c
 *
 *  Created on: 20 Mar 2022
 *      Author: yusuf
 */

#include <stdio.h>

int main()
{
	char num = 100;
	char* pnumAddress;
	char readData;

	printf("Num is %u \n", num);

	printf("address of the num is %p", &num);

	pnumAddress = &num;
	printf("\npnumAddress starts at %p \n", &pnumAddress);

	short* pAddress = (short*) 0x000000000061FE08;
	printf("pAddress pointing the value of numAddress is %x \n", *pAddress);

	printf("pnumAddress 1st byte is %x and pAddress' adress is %p\n", *pAddress, pAddress);
	pAddress += 1;
	printf("pnumAddress 2nd byte is %x and pAddress' adress is %p\n", *pAddress, pAddress);
	pAddress += 1;
	printf("pnumAddress 3rd byte is %x and pAddress' adress is %p\n", *pAddress, pAddress);

	readData = *pnumAddress;
	printf("\nRead Data is %u", readData);

	*pnumAddress = 65;
	printf("\nWritten Data is %u", num);

}

