/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Towers of Hanoi.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>

void toh(int num,char s,char d,char t)
{

	if(num==1)
	{
		printf("\nMove Disk 1 from Peg %c to Peg %c",s,d);
		
		return;
	}
	
	
	toh(num-1,s,t,d);
	
	printf("\nMove Disk %d from Peg %c to Peg %c",num,s,d);
	
	toh(num-1,t,d,s);
}

int main()
{
	int n;
	
	printf("\nEnter Number of Disk : ");
	scanf("%d",&n);
	
	printf("\nThe sequence of moves involved in Tower of Hanoi.\n");
	
	toh(n,'A','B','C'); 
    	
	return 0;
        
}
