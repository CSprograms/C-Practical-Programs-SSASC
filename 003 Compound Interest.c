#include<stdio.h>
#include<math.h>
int main()
{
	int p, n, r, t;
	float interest;

	printf("\nEnter the principle amount : ");
	scanf("%d",&p);
	printf("\nEnter the number of year : ");
	scanf("%d",&n);
	printf("\nEnter the rate of interest : ");
	scanf("%d",&r);
	printf("\nEnter the period elapsed : ");
	scanf("%d",&t);

	interest = p * pow( 1 + ( (r / 100.0) /n ) , (n*t) ) - p;

	printf("\nCompund Interest : %.2f.\n",interest);
	
	printf("\n");

	return 0;
}
