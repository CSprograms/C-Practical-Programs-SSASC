/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Simple Interest.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
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
	
	return 0;
}
