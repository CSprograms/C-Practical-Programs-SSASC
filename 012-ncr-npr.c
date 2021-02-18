#include<stdio.h>

double fact(double x)
{
	if(x>1)
		return (x * fact(x-1));
	else
		return 1;
}

int main()
{
	double n, r, ncr, npr;
	printf("\nEnter value for n : ");
	scanf("%lf",&n);
	printf("\nEnter value for r : ");
	scanf("%lf",&r);
	npr=fact(n)/fact(n-r);
	ncr=npr/fact(r);
	printf("\nThe nPr value is %e\n",npr);
	printf("\nThe nCr value is %e\n",ncr);
	return 0;
}