#include<stdio.h>
void main()
{
	/*Here is the beginning of the Fibonacci sequence with even numbers in red:
		1 1  2  3 5  8  13 21  34 55 89 144 ...
		a b 'c' a b 'c' a  b  'c' a  b  'c'
	It is easy to prove that every third Fibonacci number is even.
	*/
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
	printf("Sum of Even fibonaci nymber= %d\n",sum);
}
