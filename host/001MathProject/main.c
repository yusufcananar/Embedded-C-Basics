/*
 * main.c
 *
 *  Created on: 17 Mar 2022
 *      Author: yusuf
 */

#include <stdio.h>
#include "math.h"

int main()
{

	printf("SUM = %d\n", madd(3,5));
	printf("SUB = %d\n", msub(3,5));
	printf("MULT = %I64d\n", mmult(3,5));
	printf("DIV = %f\n", mdiv(3,5));

	//printf("%I64d", sizeof(long long));
}
