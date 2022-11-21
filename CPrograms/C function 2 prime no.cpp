#include<stdio.h>
//with para without return
void prime(int n);
main()
{
	int n;
	printf("\n enter a number = ");
	scanf("%d",&n);
	prime(n,i,c);
}
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if ( count == 2)
	{
		printf(" is a prime number");
	}
	else 
	{
		printf("not a prime number");
	}
}
