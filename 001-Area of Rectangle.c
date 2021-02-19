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
	
	printf("\n");

	return 0;
}
