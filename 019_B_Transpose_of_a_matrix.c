/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Transpose of a matrix.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>

void scanm(int matrix[10][10],int row,int col)
{
	int i, j;

    	for(i = 0; i < row; i++)
	{
        	for(j = 0; j < col; j++)
		{
			printf("Enter value for matrix[%d][%d] : ",i,j);
        		scanf("%d",&matrix[i][j]);
        	}
    	}
    
}

void printm(int x[10][10],int row,int col)
{
	for(int i=0;i<col;i++)
	{
		printf("\n");
		
		for(int j=0;j<row;j++)
		{
			printf("\t%d",x[j][i]);
		}
	}

}

int main()
{
	int a[10][10],r1,c1;

	printf("\nEnter value for r1 and c1 : ");
	scanf("%d %d",&r1,&c1);
	
	printf("\nEnter the value for Matrix A.\n");
	scanm(a,r1,c1);
	
	printf("\nTranspose Matrix .\n");
	printm(a,r1,c1);
    	
	return 0;
        
}
