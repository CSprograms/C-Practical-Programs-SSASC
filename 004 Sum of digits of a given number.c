#include<stdio.h>

int main()
{
	int digit, sum;

	printf("\nEnter a numeric value : ");
	scanf("%d",&digit);

	sum=0;

	while(digit>0)
	{
		sum = sum + digit % 10;
		digit = digit / 10;
	}

	printf("\nSum of  digit is %d.\n",sum);
	
	printf("\n");

	return 0;
}
