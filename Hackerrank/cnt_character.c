/*  Count the occurrences of a given character in a string.
WTD: Count how many times a specified character appears in a given string.
(e.g.: I/P: "apple",Char: 'p' ,O/P: "2")
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
	char s1[20],ch;
	int count=0,i;

	printf("Enter a string : ");
	scanf("%[^\n]s",s1);

	printf("Enter a character : ");
	__fpurge(stdin);
	scanf("%c",&ch);
	
	for(i=0;s1[i];i++)
	{
		if(s1[i] == ch)
		{
			count++;
		}
	}

	printf("charcter %c is present in %d times.\n",ch,count);
}
