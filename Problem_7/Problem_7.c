/*
 * Problem_7:
 *
 * 10001st prime:
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10001st prime number?
 */

#include<stdio.h>
int main()
{
	int i=3,n,count,c;

	printf("Enter the Number of prime number required\n");
	scanf("%d",&n);

	if ( n >= 1 )
 	{
		printf("First %d prime numbers are :\n",n);
		printf("1) 2\n");
	}

	for ( count = 2 ; count <= n ; i++ )
	{
		for ( c = 2 ; c <= i - 1 ; c++ )
		{
			if ( i%c == 0 )
            		break;
      		}
      		if ( c == i )
      		{
        		printf("%d) ==> %d\n",count,i);
         		count++;
      		}
   	}

	return 0;
}
