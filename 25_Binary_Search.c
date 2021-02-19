/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Binary Search.
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
		for(j=0;j<size-2;j++)
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

int binary(int *ary,int search,int low,int high)
{
	if(low<=high)
	{
		int mid=(low+high)/2;

		if(search<ary[mid])
			return(binary(ary,search,low,mid-1));
		else if(search>ary[mid])
			return(binary(ary,search,mid+1,high));
		return mid;
	}
	else
		return -1;
}

int main()
{
	int list[20],i,s,loc;

	printf("\nEnter the size of list : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter value for list[%d] : ",i);
		scanf("%d",&list[i]);
	}
	
	printf("\nEnter the Element for search : ");
	scanf("%d",&s);
	
	bubble(list);
	
	printf("\nThe list after Bubble Sort : ");	
	
	for(i=0;i<size;i++)
		printf("\t%d",list[i]);
	
	if((loc=binary(list,s,0,size-1))!=-1)
		printf("\nThe element was found at location %d.",loc);
	else
		printf("\nThe element was not found in the list.");
    	
	return 0;
}
