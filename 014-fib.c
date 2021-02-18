#include<stdio.h>

int fib(int x)
{

	if (x == 1 || x == 2 )
	{
		return 1;
	}
	else
	{
		return (fib(x-1) + fib(x-2));
	}
}

int main()
{
	int n, i;

	printf("\nEnter value for N : ");
	scanf("%d",&n);

	printf("\n");

	i=1;

	while(i<=n)
	{
		printf("%d  ",fib(i));
		i++;	// i = i + 1;
	}

	return 0;
}
