/*
 * Problem_10.c
 *
 *  Created on: 05-Dec-2016
 *      Author: Chirag R. Patel
 *
 * Summation of primes:
 *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.(2000000)
 */

#include <stdio.h>
int main()
{
	long long i,j,sum=0,num;
	printf("Please Enter the Number below which all prime numbers sum you want\n");
	scanf("%lld",&num);

	for (i = 2; i < num; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if(i%j == 0)
				break;
		}
		if(i==j)
		{
			//printf("%lld\t",i);
			sum = sum + i;
		}
	}
	printf("\nSum of all the primes below %lld = %lld",num,sum);
}

