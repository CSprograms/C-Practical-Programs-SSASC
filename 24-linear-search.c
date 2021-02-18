#include<stdio.h>
int size;
int main()
{
	int list[20],i,search;
	printf("\nEnter the size of list : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter value for list[%d] : ",i);
		scanf("%d",&list[i]);
	}
	printf("\nEnter the Element for search : ");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
		if(list[i]==search)
		{
			printf("\nThe element found at location %d.",i);
			return 0;
		}
	}
	
	printf("\nThe element was not found in the list.");

    	return 0;
}