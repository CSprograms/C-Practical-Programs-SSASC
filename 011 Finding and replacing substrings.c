/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Finding and replacing substrings.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/

#include<stdio.h>
#include<string.h>

int main(void) 
{
	char str[80],substr[80],temp[80],resstr[80],repstr[80];
	int len1,len2,len3,i,j,k=0;

	printf("\nEnter the string : ");
	scanf("%[^\n]s",str);
	
	len1=strlen(str);
	printf("\nEnter the sub string : ");
	scanf("%s",substr);
	
	len2=strlen(substr);
	
	printf("\nEnter the replace string : ");
	scanf("%s",repstr);
	
	len3=strlen(repstr);
	
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			temp[j]=str[i+j];
		}
	
		temp[j]='\0';
		
		if(strcmp(temp,substr)==0)
		{
			i+=len2-1;
		
			for(j=0;j<len3;j++)
			{
				resstr[k++]=repstr[j];
			}
			
			continue;
		}
		
		resstr[k++]=str[i];
	}
	
	resstr[k]='\0';
	
	printf("\nThe given string is %s",str);
	printf("\nThe given sub string is %s",substr);
	printf("\nThe given replace string is %s",repstr);
	printf("\nThe result string is %s\n",resstr);
	
	return 0;
}
