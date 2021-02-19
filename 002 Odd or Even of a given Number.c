/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Odd or Even of a given number.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

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
