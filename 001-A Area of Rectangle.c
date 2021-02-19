/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Area of Rectangle.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	
*/
#include <stdio.h>

int main( )
{
	int length, width, area;

	printf("\nEnter the value for length : ");
	scanf("%d",&length);

	printf("\nEnter the value for width : ");
	scanf("%d",&width);

	area = length * width;

	printf("\nArea of Rectangle is %d.\n", area);
	
	return 0;
}
