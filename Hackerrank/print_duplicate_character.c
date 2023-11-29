/*  Print Duplicate characters from a string.
What to do (WTD): Traverse through the given string and identify characters that appear 
more than once.
(e.g.: I/P: "apple" ,O/P: "p")*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,j,flag=0;
	printf("Enter a string : ");
	gets(str);

	for(i=0;str[i];i++)
	{
		flag=0;
		for(j=i+1;str[j];j++)
		{
			if(str[i]==str[j])
			{
				memmove(str+j,str+j+1,strlen(str+j+1)+1);
				j--;
				flag=1;
			}
		}
		if(flag==1)
		printf("%c",str[i]);

	}
}
