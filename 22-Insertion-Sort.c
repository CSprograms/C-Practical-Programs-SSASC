#include<stdio.h>
int size;

void insertion(int *x)
{
	int temp,i,j;
	for(i=1;i<size;i++)
	{
		temp=x[i];
		j=i-1;
		while(temp<x[j] && j>-1)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=temp;
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
	insertion(list);
	printf("\nThe Sorted Elements : ");
	for(i=0;i<size;i++)
	{
		printf("\t%d",list[i]);
	}
    	return 0;
}