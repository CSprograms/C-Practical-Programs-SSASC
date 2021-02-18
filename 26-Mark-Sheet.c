#include<stdio.h>

struct MarkSheet
{
	int rollNo, m1, m2, m3, tot;
	float avg;
};

int main()
{
	struct MarkSheet MS;
	FILE *fptr;

	fptr=fopen("MarkSheet.txt","w");

	if(!fptr)
	{
		printf("\nError in opening file!");
		return 1;
	}

	printf("\nEnter Roll Number : ");
	scanf("%d",&MS.rollNo);

	printf("\nEnter Mark 1 : ");
	scanf("%d",&MS.m1);
	printf("\nEnter Mark 2 : ");
	scanf("%d",&MS.m2);
	printf("\nEnter Mark 3 : ");
	scanf("%d",&MS.m3);

	MS.tot = MS.m1 + MS.m2 + MS.m3;

	MS.avg = MS.tot / 3.0;

	fprintf(fptr,"%d %d %d %d %d %f\n", MS.rollNo, MS.m1, MS.m2, MS.m3, MS.tot, MS.avg);

	fclose(fptr);

	return 0;
}