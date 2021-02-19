/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Maximum & Minimum.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>

void max_min(int *ary,int n, int *high, int *low)
{
	if(ary[n]>*high)
		*high=ary[n];
	else if(ary[n]<*low)
		*low=ary[n];

	if(n>0)
		max_min(ary,n-1,high,low);
}

int main()
{
	int list[20], i,size,largest,smallest;
	
	printf("\nEnter the size of list : ");
	scanf("%d",&size);

	i=0;

	while(i<size)
	{
		printf("Enter value for list[%d] : ",i);
		scanf("%d",&list[i]);
	
		i++;
	}

	largest=smallest=list[size-1];
	max_min(list,size-2,&largest,&smallest);

	printf("\nThe Maximum of given value is %d.\n",largest);
	printf("\nThe Minimum of given value is %d.\n",smallest);

    	return 0;
        
}
