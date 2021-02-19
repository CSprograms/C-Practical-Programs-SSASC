/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Area of Square.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	
*/

#include<stdio.h>

int main()
{
	int a,area;

	printf("\nEnter value for side of the square 'a' : ");
	scanf("%d",&a);

	area=a*a;

	printf("\nArea of square for given side '%d' is %d.\n",a,area);
	
	return 0;
}
