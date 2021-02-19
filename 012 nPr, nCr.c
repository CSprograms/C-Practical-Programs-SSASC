/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: nPr, nCr.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

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
