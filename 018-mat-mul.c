/* PRACTICAL PROGRAM 14: MATRIX MULTIPLICATION */
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
	for(int i=0;i<row;i++)
	{
		printf("\n");
		for(int j=0;j<col;j++)
		{
			printf("\t%d",x[i][j]);
		}
	}

}

int main()
{
	int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;

	printf("\nEnter value for r1 and c1 : ");
	scanf("%d %d",&r1,&c1);

	printf("\nEnter value for r2 and c2 : ");
	scanf("%d %d",&r2,&c2);

	if(c1!=r2)
	{
		printf("\nMatrix Multiplication is not possible for given matrix size.");
		return 0;
	}

	printf("\nEnter the value for Matrix A.\n");
	scanm(a,r1,c1);

	printf("\nEnter the value for Matrix B.\n");
	scanm(b,r1,c1);

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mul[i][j]=0;
			
			for(k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nMultiplication Matrix .\n");
	printm(mul,r1,c1);

    	return 0;
        
}