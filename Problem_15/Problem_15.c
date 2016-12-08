/*
 * Problem_15.c
 *
 *  Created on: 08-Dec-2016
 *      Author: Chirag R. Patel
 *
 * Lattice paths:
 *
 * Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
 * there are exactly 6 routes to the bottom right corner.
 *
 * How many such routes are there through a 20×20 grid?
 *
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int i, j, num = 0;

	for (i = 1; i <= 20; ++i)
	{

		for (j = 1; j <= i; ++j)
		{
			num = num + pow(2,j);
		}
		printf("%d : count =%d\n",i,num);
		num=0;
	}
}

