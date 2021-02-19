/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Compound Interest.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
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

	return 0;
}
