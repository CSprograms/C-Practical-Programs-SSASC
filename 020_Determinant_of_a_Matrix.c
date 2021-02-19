/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Determinant of a Matrix.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>

#define N 10

void scanm(int matrix[N][N],int row,int col)
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

void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;
 
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];

                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinantOfMatrix(int mat[N][N], int n)
{
    int D = 0; // Initialize result
 
    if (n == 1)
        return mat[0][0];
 
    int temp[N][N];
 
    int sign = 1;
 
    for (int f = 0; f < n; f++)
    {
        getCofactor(mat, temp, 0, f, n);

	D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1);
 
        sign = -sign;
    }
 
    return D;
}

int main()
{
	int a[N][N],size,i,det=0;

	printf("\nEnter value for size of matrix A : ");
	scanf("%d",&size);

	printf("\nEnter the value for Matrix A.\n");
	scanm(a,size,size);

	printf("\n|A| : %d",determinantOfMatrix(a,size));	
    	
	return 0;
        
}
