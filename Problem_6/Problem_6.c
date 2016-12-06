/*
 * Problem_6:
 *
 * Sum square difference:
 *
 * The sum of the squares of the first ten natural numbers is,
 *
 * 		1^2 + 2^2 + ... + 10^2 = 385
 *
 * The square of the sum of the first ten natural numbers is,
 *
 * 		(1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 * Hence the difference between the sum of the squares of the first ten natural numbers
 * and
 * the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */
#include<stdio.h>
int main()
{
	unsigned long int i=0,j=0,sum1=0,sum2=0,x=0,diff=0;
	    
	for(i=1;i<=100;i++)
	    x=x+i;
	sum1=x*x;
	printf("\nThe square of the sum of the first one hundred natural numbers is ==> %lu\n",sum1);
	
	x=0;
	for(i=1;i<=100;i++)
	{
	    x=i*i;
	    sum2= sum2+x;
	}
	printf("\nThe sum of the squares of the first one hundred natural numbers is ==> %lu\n",sum2);
	
	diff= sum1-sum2;	
	printf("\nDifference between the sum of the squares of the first one hundred natural numbers and the square of the sum = %lu\n\n",diff);
}

