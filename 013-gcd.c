#include<stdio.h>

int gcd(int x,int y)
{

	if(x>y)
		return(gcd(x-y,y));
	else if(x<y)
		return(gcd(x,y-x));
	else
		return x;
}

int main()
{
	int a,b;
	
	printf("\nEnter value for a : ");
	scanf("%d",&a);

	printf("\nEnter value for b : ");
	scanf("%d",&b);

	printf("\nThe gcd(%d,%d) is %d.",a,b,gcd(a,b));

    	return 0;
        
}