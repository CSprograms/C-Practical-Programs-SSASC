/*
	Institution		: Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
	Title of the Degree	: BCA.
	Year / Semester		: I / II.
	Academic Year		: 2018-2019 to 2020-2021. 
	Title of the Paper 	: C Programming Lab.
	Title of the Program 	: Counting the no. of vowels, consonants, words, white spaces in a line of text and array of lines.
	Preapared by 		: M Aravindhan, Assistant Professor, Department of Computer Science,
				Sri Sankara Arts and Science College (Autonomous), Enathur, Kanchipuram - 631 561.
*/
#include <stdio.h>
#include<ctype.h>

int main()
{
    char line[80],ch ;
    int i, vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; i++)
    {
	ch=toupper(line[i]);
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U')
        {
            ++vowels;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ++consonants;
        }
        else if(ch >= '0' && ch <= '9')
        {
            ++digits;
        }
        else if (ch == ' ')
        {
            ++spaces;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);
    printf("\nWords: %d", spaces+1);

    return 0;
}
