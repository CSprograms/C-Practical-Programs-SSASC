#include<stdio.h>

struct Electricity
{
	int serviceNo, old, new, unit;
	float amount;
};

int main()
{
	struct Electricity E;
	FILE *fptr;

	fptr=fopen("Electricity.txt","w");

	if(!fptr)
	{
		printf("\nError in opening file!");
		return 1;
	}

	printf("\nEnter Service Number : ");
	scanf("%d",&E.serviceNo);

	printf("\nEnter Old Reading : ");
	scanf("%d",&E.old);

	printf("\nEnter New Reading : ");
	scanf("%d",&E.new);

	E.unit = E.new - E.old;

	if( E.unit <= 100 )
		E.amount = 30 ;
	else if( E.unit <= 200 )
		E.amount = 30 + ( ( E.unit - 100 ) * 1.5 );
	else if( E.unit <= 500 )
		E.amount = 40 + 200 + ( ( E.unit - 200 ) * 3 );
	else
		E.amount = 50 + 350 + 920 + ( ( E.unit - 500 ) * 6.6 );

	fprintf(fptr,"%d %d %d %d %f\n", E.serviceNo, E.old, E.new, E.unit, E.amount);

	fclose(fptr);

	return 0;
}