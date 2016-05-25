#include<stdio.h>
void main()
{
	unsigned int i=0,j=0,k=1,l=0,sum=0;

	for(i=0;i<400;i++)
	{
		l=j+k;
		if(l%2 == 0)
		{
			sum=sum+l;
			if(sum>4000000)
			{
				//printf("\nLoop count= %d\n",i);
				break;
			}
		}
		j=k;
		k=l;
	}
	printf("Sum of Even fibonaci nymber= %d\n",sum);
}
