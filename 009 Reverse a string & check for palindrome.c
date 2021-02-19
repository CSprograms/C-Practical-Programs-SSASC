/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Reverse a string & check for palindrome.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int i,j, palindrome;
	
	printf("\nEnter a string: ");
	scanf("%s",str);

	j=strlen(str)-1;
	palindrome=1;
	
	for(i=0 ; i < j ; i++ , j--)
	{
		if(str[i]!=str[j])
		{
			palindrome=0;
			break;
		}
	}

	if(palindrome)
		printf("\nEntered string is palindrome.");
	else
		printf("\nEntered string is not palindrome.");
	
    	return 0;
        
}
