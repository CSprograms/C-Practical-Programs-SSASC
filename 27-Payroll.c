#include<stdio.h>

struct Payroll
{
	int eID, grade, hour, pay;
};

int main()
{
	struct Payroll P;
	FILE *fptr;

	fptr=fopen("Payroll.txt","w");

	if(!fptr)
	{
		printf("\nError in opening file!");
		return 1;
	}

	printf("\nEnter Employee ID : ");
	scanf("%d",&P.eID);

	printf("\nEnter Employee Grade : ");
	scanf("%d",&P.grade);

	printf("\nEnter Employee Work Hour : ");
	scanf("%d",&P.hour);

	if( P.grade == 1 )
		P.pay = P.hour * 1000;
	else if( P.grade == 2 )
		P.pay = P.hour * 500;
	else if( P.grade == 3 )
		P.pay = P.hour * 250;
	else if( P.grade == 4 )
		P.pay = P.hour * 100;
	else 
		P.pay = P.hour * 50;

	fprintf(fptr,"%d %d %d %d\n", P.eID, P.grade, P.hour, P.pay);

	fclose(fptr);

	return 0;
}