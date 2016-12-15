/*
 * Problem_16.c
 *
 *  Created on: 12-Dec-2016
 *      Author: Chirag R Patel
 *
 * Power digit sum:
 *
 * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 *
 * What is the sum of the digits of the number 2^1000?
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int data[310] =
	{ 0 };

	int i, j, m, carry, c;
	long temp = 1, sum = 0;

	carry = 0; //Initializes carry variable to 0.
	data[309] = 1; //Initialize the last digit of array to 1.

	c = 1000; //Initialize the number of power rest to 2.

	for (i = 1; i <= c; ++i)
	{
		printf("%d):\t", i);
		for (j = 309; j >= 0; --j)
		{
			if (carry > 0)
			{
				temp = ((data[j] * 2) + carry);
				carry = 0;
			}
			else
				temp = (data[j] * 2);

			if (temp > 9)
			{
				data[j] = temp % 10;
				carry = temp / 10;
			}
			else
				data[j] = temp;

			temp = 0;
		}

		for (m = 0; m < 310; ++m)
			printf("%d", data[m]);
		printf("\n");

		for (m = 0; m < 310; ++m)
			sum = sum + data[m];
		printf("Sum of 2^%d digits = %ld\n\n", i, sum);

		sum = 0;
	}
	return 0;
}
