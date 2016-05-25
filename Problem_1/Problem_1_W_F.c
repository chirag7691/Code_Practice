#include<stdio.h>
void main()
{
	int i,j=3,k=5,sum=0;
	for(i=1;i<1000;i++)
	if(i%j==0 | i%k==0)
		sum = sum + i;
	printf("Total Sum = %d\n", sum);
}

