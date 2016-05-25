#include<stdio.h>
void main()
{
	unsigned long long int i,j,k=1,num=0,status,l=0;
	printf("Enter Number:\t");
	scanf("%llu",&num);
	
	if(num <= 1)
		printf("\nEntered Number is not a Prime number. So prime factors not possible.\nPlease Enter valid number\n");

	for(i=2;i<=num;i++)
	{
		//   If num is exactly divisible by i Then i is a factor of num 
       
        	if(num%i==0)  
        	{
			status=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					status=0;
					//printf("Break %llu\n", i);
					break;
				}
			}
			if(status==1)  
            		{  
				if(i>l)
				{
					l=i;
					k=k*l;
           			}
                		printf("%llu\t", i);  
				num=num/i;
				i=1;
			}
			if(k==num)
				break;	 
		}		
	}
	if(status==1)
		printf("\nLargest Prime factor is %llu\n",l);
	printf("\n");
}
