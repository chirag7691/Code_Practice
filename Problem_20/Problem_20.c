/*
 * Problem_20.c
 *
 *  Created on: 15-Dec-2016
 *      Author: radix
 *
 * Factorial digit sum:
 *
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 *
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 *
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 *
 * Find the sum of the digits in the number 100!
 */

#include <stdio.h>
#include <math.h>

unsigned int buf[160] =
{ 0 };

void FindFactorial(int num)
{
	int i, digit = 0, c;
	int j, m, carry;
	long temp = 1;

	carry = 0; //Initializes carry variable to 0.
	buf[159] = 1; //Initialize the last digit of array to 1.

	for (m = 0; m <= 159; ++m)
		printf("%d", buf[m]);
	printf("\n");

	for (i = 1; i <= num; ++i)
	{
		c = 0;
		printf("%d):\t", i);
		for (j = 159; j >= 0; --j)
		{
			if (carry > 0)
			{
				temp = ((buf[j] * i) + carry);
				carry = 0;
			}
			else
				temp = (buf[j] * i);

			if (temp > 9)
			{
				buf[j] = temp % 10;
				carry = temp / 10;
			}
			else
				buf[j] = temp;

			temp = 0;
		}

		for (m = 0; m < 159; ++m)
		{
			if (buf[m] == 0)
			{
				if (buf[m + 1] == 0)
					c++;
			}
			else
				break;
		}

		c = c + 1;
		for (m = c; m <= 159; ++m)
			printf("%d", buf[m]);
		printf("\n");
	}
}

void FindSum()
{
	int sum = 0;

	for (int i = 179; i > 0; --i)
	{
		sum = sum + buf[i];
	}

	printf("sum of the digits in the number 100! : %d\n", sum);

}

int main(int argc, char **argv)
{
	int i;

	printf("Enter a number to find factorial:");
	scanf("%d", &i);

	FindFactorial(i);

	FindSum();

}
