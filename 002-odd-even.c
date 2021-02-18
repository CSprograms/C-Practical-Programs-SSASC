#include<stdio.h>

int main()
{
	int number, reminder;

	printf("\nEnter a numeric value : ");
	scanf("%d",&number);

	reminder=number%2;

	if(reminder)
		printf("\nGiven number is ODD.\n");
	else
		printf("\nGiven number is EVEN.\n");

	return 0;
}