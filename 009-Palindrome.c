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