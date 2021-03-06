/*Problem_2:
 * Even Fibonacci numbers:
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be:
 *
 * 		1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million (4000000),
 * find the sum of the even-valued terms.
 */

#include<stdio.h>
int main()
{
	unsigned int i=0,j=0,k=1,l=0,sum=0;

	for(i=0;i>=0;i++)
	{
		if(i == 0)
        	{
      		     printf("%d, ", j);
       		     continue;
       		}
		
		l=j+k;
		j=k;
		k=l;
		printf("%d, ", l);

		if(l%2 == 0)
		{
			sum=sum+l;
			if(sum>4000000)
				break;
		}
	}
	printf("\nSum of Even Fibonacci number= %d\n",sum);

	/*
	 * Problem_2_1:
		unsigned int i=0,j=1,k=1,l=0,sum=0;
		l=j+k;
		while(l<4000000)
		{
			printf("%d,\t",l);
			sum=sum+l;
			j=k+l;
			k=l+j;
			l=j+k;

		}
		printf("\nSum of Even Fibonacci number= %d\n",sum);
	 */

	/*Problem_2_2:
		Here is the beginning of the Fibonacci sequence with even numbers in red:
		1 1  2  3 5  8  13 21  34 55 89 144 ...
		a b 'c' a b 'c' a  b  'c' a  b  'c'
		It is easy to prove that every third Fibonacci number is even.

		unsigned int i,j,k,sum=0;
		i=1;
		j=1;
		k=i+j;
		while(k<4000000)
		{
			sum=sum+k;
			i=j+k;
			j=k+i;
			k=i+j;
		}
		printf("Sum of Even fibonaci number= %d\n",sum);
	 */
	return 0;
}
