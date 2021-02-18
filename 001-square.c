/*		AREA OF SQUARE	(area=a*a)		*/

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