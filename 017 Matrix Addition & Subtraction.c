/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Matrix Addition & Subtraction.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>
#include<stdlib.h>


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

void printm(int matrix[10][10],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		printf("\n");
		for(int j=0;j<col;j++)
		{
			printf("\t%d",matrix[i][j]);
		}
	}

}

int main()
{
	int a[10][10],b[10][10],add[10][10],sub[10][10],r1,c1,r2,c2,i,j;

	printf("\nEnter value for r1 and c1 : ");
	scanf("%d %d",&r1,&c1);

	printf("\nEnter value for r2 and c2 : ");
	scanf("%d %d",&r2,&c2);

	if((r1!=r2) || (c1!=c2))
	{
		printf("\nMatrix Addition and Subtraction is not possible for given matrix size.");
		return 0;
	}

	printf("\nEnter the value for Matrix A.\n");
	scanm(a,r1,c1);

	printf("\nEnter the value for Matrix B.\n");
	scanm(b,r1,c1);

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
			sub[i][j]=a[i][j]-b[i][j];
		}
	}

	printf("\nAddition Matrix .\n");
	printm(add,r1,c1);
	
	printf("\nSubtraction Matrix .\n");
	printm(sub,r1,c1);

    	return 0;
        
}
