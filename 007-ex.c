#include<stdio.h>
#include<math.h>

double fact(double x)
{
	if (x==1)
    		return 1;
    	else
    		return (x*fact(x-1));	
}

int main()
{
	double x, n, i, series;
	printf("Enter value for x: ");
    	scanf("%lf",&x);
	printf("Enter value for n: ");
    	scanf("%lf",&n);
    	x=x*3.14178/180;	
	series=1+x;
	i=2;
	while(i<=n)	
	{
  		series = series + (pow(x,i)/fact(i));
		i= i + 1;
	}
	printf("\nexp(x) \t\t:\t%lf",series);		
    	printf("\nmath.exp(x) \t:\t%lf\n",exp(x));	
	return 0;
}