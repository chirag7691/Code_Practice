#include<stdio.h>
int SumDivisibleBy (int n, int y);
void main()
{
	int i,j=3,k=5,sum=0;
	for(i=1;i<1000;i++)
	if(SumDivisibleBy(i,3)==0 | SumDivisibleBy(i,5)==0)
		sum = sum + i;
	printf("Total Sum = %d\n", sum);
}

int SumDivisibleBy (int n,int y)
{
	int res=0;
	res=n%y;
	return(res);
}
