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