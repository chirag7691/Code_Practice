#include<stdio.h>
int main()
{
	unsigned int i,j,pro,large=0,prev=0,n1,n2,l1,l2,x,y,z,lim=0,in1=1,in2=1;

	printf("Enter largest total digit count greater than 1....\n");
	scanf("%d",&z);

	if(z<=1)
	{
		printf("Wrong Input\n");
		return 0;
	}
	for(i=0;i<z;i++)
		in1=in1*10;
	lim=in1/10;
	in1=in1-1;
	in2=in1;
	printf("i=%d, j=%d, lim=%d\n",in1,in2,lim);
 
	for(i=in1;i>lim;i--)
	{
		for(j=in2;j>lim;j--)
		{
			x=10;
			n2=0;
			pro=i*j;
			n1=pro;
			while(pro>0)
			{
				y=pro%x;
				n2=(n2*10)+y;
				//printf("%d ==> %d ==>%d\n",k,x,y);
				pro=pro/10;
			}
			if(n1==n2)
			{
				printf("%d * %d ===> n1= %d  n2=%d\n",i,j,n1,n2);
				if(n1>prev)
				{
					prev=n1;
					l1=i;
					l2=j;
				}
			}

		}
	}
	printf("Largest.....%d * %d ===>  %d\n",l1,l1,prev);
}

