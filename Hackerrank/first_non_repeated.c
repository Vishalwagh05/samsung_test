/* Print the first non-repeated character from a string.
WTD: Examine the string and pinpoint the very first character that doesn't repeat elsewhere 
in the string.
(e.g.: I/P: "swiss" ,O/P: "w")*/

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
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("first Non-repeated charcter :- %c \n",str[i]);
			return 0;
		}
	}
}




