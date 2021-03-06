/* Problem_1:
 * Multiples of 3 and 5:
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */


#include<stdio.h>
int SumDivisibleBy (int n, int y);
void main()
{
	int i,j=3,k=5,sum=0;
	for(i=1;i<1000;i++)
	{
		if((SumDivisibleBy(i,j)==0 | SumDivisibleBy(i,k)==0))
			sum = sum + i;
	}
	printf("Total Sum of all the multiples of 3 or 5 below 1000 = %d\n", sum);
}

int SumDivisibleBy (int n,int y)
{
	int res=0;
	res=n%y;
	return(res);
}
