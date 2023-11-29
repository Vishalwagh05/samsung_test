/* Convert a string to its integer representation without using any built-in functions.
WTD: Transform a given string of numeric characters into its corresponding integer 
representation without relying on built-in methods.
(e.g., "1234" to 1234)*/

#include<stdio.h>
#include<string.h>

void my_atoi(char* str)
{
	int rem=0,result=0,i;
	for(i=0;str[i];i++)
	{
		result=result*10+str[i]-'0';
	}
	printf("result = %d ",result);
}
	
int main()
{
	char str[100];
	printf("Enter a string : ");
	gets(str);

	my_atoi(str);
}

