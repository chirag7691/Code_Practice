/*
 * Problem_14.c
 *
 *  Created on: 08-Dec-2016
 *      Author: Chirag R. Patel
 *
 * Longest Collatz sequence:
 *
 * The following iterative sequence is defined for the set of positive integers:
 *
 * 			n → n/2 (n is even)
 * 			n → 3n + 1 (n is odd)
 *
 * Using the rule above and starting with 13, we generate the following sequence:
 *
 * 			13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 *
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
 * Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 *
 * Which starting number, under one million, produces the longest chain?
 *
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */

#include <stdio.h>
int main(int argc, char **argv)
{
	int j = 2, k = 0, num, count;
	long i;
	while (j < 1000000)
	{
		count = 0;
		i = j;
		while (i)
		{
			if (i % 2 == 0)
			{
				i = i / 2;
				if (i == 1)
					break;
				count++;
			}
			else
			{
				i = ((i * 3) + 1);
				if (i == 1)
					break;
				count++;
			}
		}

		if (count > k)
		{
			k = count;
			num = j;
			printf("Num : %d & Count = %d\n", num, k);
		}

		//printf("Num : %d & Count = %d\n", j, count);
		j++;
	}
	printf("Number produces the longest chain : %d & Count = %d\n", num, k);
}

