/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Electricity bill.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

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
