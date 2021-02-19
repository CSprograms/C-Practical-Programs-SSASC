/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Sum of digits of a given number.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	
*/
#include<stdio.h>

int main()
{
	int digit, sum;

	printf("\nEnter a numeric value : ");
	scanf("%d",&digit);

	sum=0;

	while(digit>0)
	{
		sum = sum + digit % 10;
		digit = digit / 10;
	}

	printf("\nSum of  digit is %d.\n",sum);

	return 0;
}
