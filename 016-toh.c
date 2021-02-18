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