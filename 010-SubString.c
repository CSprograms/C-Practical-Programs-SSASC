#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[80],substr[80],temp[80],resstr[80];
	int len1,len2,i,j,k=0,count=0;
	printf("\nEnter the string : ");
	scanf("%[^\n]s",str);
	len1=strlen(str);
	printf("\nEnter the sub string : ");
	scanf("%s",substr);
	len2=strlen(substr);
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
     			count++;
     			continue;
   		}
   
		resstr[k++]=str[i];
	}
 
	resstr[k]='\0';

	printf("\nThe given string is %s.",str);
 	
	printf("\nThe given sub string is %s.",substr);
 	
	printf("\nThe result string is %s.",resstr);
 	
	printf("\nThe substring appeared %d times in the string.\n",count);
 
	return 0;

}