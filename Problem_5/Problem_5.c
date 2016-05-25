#include<stdio.h>
int main()
{
	unsigned long long int i=1;
	unsigned int j=0,x=0;
	    
	while(1)
	{
	    x=0;
	    if(i%20==0)
	    {
	        for(j=1;j<=20;j++)
	        {
	            if(i%j==0)
	            {
	                x++;
	                //printf("%lu\t",j);
	            }
	        }
	        if(x==20)
	            break;
	    }
	    //printf(".");
	    i++;
	}
	
	printf("\nsmallest positive number that is evenly divisible by all of the numbers from 1 to 20 ===> %llu\n",i);
}

