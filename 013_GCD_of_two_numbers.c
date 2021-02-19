/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: GCD of two numbers.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

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
