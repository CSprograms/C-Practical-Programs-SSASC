#include<stdio.h>
#include<math.h>

double fact(double x)
{
	if (x == 1)
    		return 1;
	else
    		return (x*fact(x-1));	
    }

int main()
{
	int n;
	printf("\nEnter value for n: ");
    	scanf("%d",&n);
	printf("\n%d! : %.0lf\n",n,fact(n));		
	return 0;
}