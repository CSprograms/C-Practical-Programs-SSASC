/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: cos(x).
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
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
	double x, n, i, series, sign;
	
	printf("Enter value for x: ");
    	scanf("%lf",&x);
	printf("Enter value for n: ");
    	scanf("%lf",&n);
    	
	x=x*3.14178/180;	
	series=1;
	sign=-1;
	i=2;
	
	while(i<=n)	
	{
  		series = series + sign * (pow(x,i)/fact(i));
		sign = -sign;
		i= i + 2;
	}
	
	printf("\ncos(x) \t\t:\t%lf",series);		
    	printf("\nmath.cos(x) \t:\t%lf\n",cos(x));	
	
	return 0;
}
