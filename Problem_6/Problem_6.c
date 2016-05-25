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

