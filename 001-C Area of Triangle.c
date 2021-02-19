/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Area of Triangle.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	
*/

#include <stdio.h>

int main( )
{
	float breadth, height, area;

	printf("\nEnter the value for breadth : ");
	scanf("%f",&breadth);

	printf("\nEnter the value for height : ");
	scanf("%f",&height);

	area = (breadth * height)/2;

	printf("\nArea of Triangle is %.2f.\n", area);

	return 0;
}
