#include<stdio.h>
void scanm(int matrix[10][10],int row,int col)
{
    	for(int i = 0; i < row; i++)
	{
	        	for(int j = 0; j < col; j++)
		{
			printf("Enter value for matrix[%d][%d] : ",i,j);
        		    	scanf("%d",&matrix[i][j]);
        		}
    	}
}
int trace(int matrix[10][10],int row,int col)
{
	int temp = 0;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			if( i == j )
				temp += matrix[i][j];
		}
	}
	return temp;
}

int main()
{
	int a[10][10],r1,c1, result;
	printf("\nEnter value for r1 and c1 : ");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the value for Matrix A.\n");
	scanm(a,r1,c1);
	result = trace(a,r1,c1);
	printf("\nTrace of a Matrix : %d\n",result);
    	return 0;
}