/*Check if the string contains only digits.
WTD: Determine if all characters in the provided string are numeric digits.
(e.g.: I/P: "1234a" ,O/P: "False")*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	printf("Enter a string : ");
	scanf("%[^\n]s",str);

	for(int i=0; str[i] ; i++)
	{
		if(!(str[i]>='0' && str[i]<='9'))
		{
			printf("false\n");
			return 0;
		}
	}
	printf("Given string comntains only Digit.\n");
}
