#include<stdio.h>

int main()
{
	int p, n, r;
	float interest;

	printf("\nEnter the principle amount : ");
	scanf("%d",&p);
	
	printf("\nEnter the number of year : ");
	scanf("%d",&n);

	printf("\nEnter the rate of interest : ");
	scanf("%d",&r);

	interest = p * n * (r/100.0);

	printf("\nSimple Interest : %.2f.\n",interest);
	
	printf("\n");
	
	return 0;
}
