/*
 * Problem_9:
 *
 * Special Pythagorean triplet:
 *
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 * 		 a^2 + b^2 = c^2
 *
 * For example,
 * 		 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int s = 1000;
	bool found = false;
	long prod=1;

	for (a = 1; a < s / 3; a++)
	{
	    for (b = a; b < s / 2; b++)
	    {
	        c = s - a - b;

	        if (a * a + b * b == c * c)
	        {
	            found = true;
	            prod = (a*b*c);
	            break;
	        }
	    }

	    if (found)
	    {
	        break;
	    }
	}

	printf("product of a * b * c ==> %d * %d * %d = %ld\n",a,b,c,prod);
	return(0);
}
