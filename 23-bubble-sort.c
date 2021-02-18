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