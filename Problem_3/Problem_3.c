/* Problem_3:
 * Largest prime factor:
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include<stdio.h>
int main()
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
	return 0;
}
