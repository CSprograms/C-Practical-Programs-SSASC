/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Fibonacci sequence.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
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
