/*
 * Problem_17.c
 *
 *  Created on: 12-Dec-2016
 *      Author: Chirag R Patel
 *
 * Number letter counts:
 *
 * If the numbers 1 to 5 are written out in words:
 *  one, two, three, four, five
 *
 * then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,how many letters would be used?
 *
 *
 * NOTE:
 * Do not count spaces or hyphens.
 * For example, 342 (three hundred and forty-two) contains 23 letters
 * and 115 (one hundred and fifteen) contains 20 letters.
 *
 * The use of "and" when writing out numbers is in compliance with British usage.
 *
 */

#include <stdio.h>

int checkdigit1to9(int n)
{
	int count = 0;

	if (n == 1)
		count = 3;
	else if (n == 2)
		count = 3;
	else if (n == 3)
		count = 5;
	else if (n == 4)
		count = 4;
	else if (n == 5)
		count = 4;
	else if (n == 6)
		count = 3;
	else if (n == 7)
		count = 5;
	else if (n == 8)
		count = 5;
	else if (n == 9)
		count = 4;

	return count;
}

int checkdigit10to20(int n)
{
	int num = 0;

	if (n == 10)
		num = 3;
	else if (n == 11)
		num = 6;
	else if (n == 12)
		num = 6;
	else if (n == 13)
		num = 8;
	else if (n == 14)
		num = 8;
	else if (n == 15)
		num = 7;
	else if (n == 16)
		num = 7;
	else if (n == 17)
		num = 9;
	else if (n == 18)
		num = 8;
	else if (n == 19)
		num = 8;

	return num;
}

int checkdigit20to99(int n)
{
	int count = 0, x = 0, y = 0;

	x = n % 10;
	y = n / 10;

	if (y == 2)
	{
		if (x == 0)
			count = 6;
		else
		{
			count = 6 + checkdigit1to9(x);
		}
	}
	else if (y == 3)
	{
		if (x == 0)
			count = 6;
		else
		{
			count = 6 + checkdigit1to9(x);
		}
	}
	else if (y == 4)
	{
		if (x == 0)
			count = 5;
		else
		{
			count = 5 + checkdigit1to9(x);
		}
	}
	else if (y == 5)
	{
		if (x == 0)
			count = 5;
		else
		{
			count = 5 + checkdigit1to9(x);
		}
	}
	else if (y == 6)
	{
		if (x == 0)
			count = 5;
		else
		{
			count = 5 + checkdigit1to9(x);
		}
	}
	else if (y == 7)
	{
		if (x == 0)
			count = 7;
		else
		{
			count = 7 + checkdigit1to9(x);
		}
	}
	else if (y == 8)
	{
		if (x == 0)
			count = 6;
		else
		{
			count = 6 + checkdigit1to9(x);
		}
	}
	else if (y == 9)
	{
		if (x == 0)
			count = 6;
		else
		{
			count = 6 + checkdigit1to9(x);
		}
	}

	return count;
}

int checkdigit100to999(int n)
{
	int total = 0, X = 0, Y = 0, Z = 0, a = 3;

	X = n % 10;
	printf("X = %d\n", X);
	Y = ((n / 10) % 10);
	printf("Y = %d\n", Y);
	Z = n / 100;
	printf("Z = %d\n", Z);

	if (Z == 1)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 10;
			else
			{
				total = 10 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 10 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 10 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 2)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 10;
			else
			{
				total = 10 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 10 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 10 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 3)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 12;
			else
			{
				total = 12 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 12 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 12 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 4)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 11;
			else
			{
				total = 11 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 11 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 11 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 5)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 11;
			else
			{
				total = 11 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 11 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 11 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 6)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 10;
			else
			{
				total = 10 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 10 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 10 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 7)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 12;
			else
			{
				total = 12 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 12 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 12 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 8)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 12;
			else
			{
				total = 12 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 12 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 12 + a + checkdigit20to99((Y * 10) + X);
		}
	}
	else if (Z == 9)
	{
		if (Y == 0)
		{
			if (X == 0)
				total = 11;
			else
			{
				total = 11 + a + checkdigit1to9(X);
			}
		}
		else if (Y == 1)
		{
			total = 11 + a + checkdigit10to20((Y * 10) + X);
		}
		else
		{
			total = 11 + a + checkdigit20to99((Y * 10) + X);
		}
	}

	return total;
}

int main(int argc, char **argv)
{
	int i, j, c = 0, n;

	for (i = 1; i <= 1000; ++i)
	{
		n = i;

		if (n < 10)
		{
			c = c + checkdigit1to9(n);
		}
		else if ((n >= 10) && (n < 100))
		{
			if (n < 20)
			{
				j = checkdigit10to20(n);

				c = c + j;
				j = 0;
			}
			else
			{
				j = checkdigit20to99(n);

				c = c + j;
				j = 0;
			}
		}
		else if ((n >= 100) && (n < 1000))
		{
			j = checkdigit100to999(n);

			c = c + j;
			j = 0;
		}
		else if (n == 1000)
		{
			c = c + 11;
			break;
		}
		printf("Total Number of letters upto %d = %d\n\n", i, c);
	}
	printf("Total Number of letters upto %d including %d = %d\n\n", i, i, c);
	return 0;
}

