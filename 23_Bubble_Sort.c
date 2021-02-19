/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Bubble Sort.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>

int size;
void bubble(int *x)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}	
}

int main()
{
	int list[20], i;
	
	printf("\nEnter the size of list : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter value for list[%d] : ",i);
		scanf("%d",&list[i]);
	}
	
	bubble(list);
	
	printf("\nThe Sorted Elements : ");
	
	for(i=0;i<size;i++)
	{
		printf("\t%d",list[i]);
	}
    	
	return 0;
}
