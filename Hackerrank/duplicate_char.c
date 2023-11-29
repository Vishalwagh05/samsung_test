/* Duplicate characters found in a string.
WTD: Spot all characters in the string that appear more than once and list them.
(e.g.: I/P: "programming" ,O/P: "r","g","m")*/


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int flag=0,i,j;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);

	for( i=0; str[i] ;i++)
	{
		flag=0;
		for(j=i+1; str[j]; j++)
		{
			if(str[i]==str[j])
			{
				flag=1;
				memmove(str+j,str+j+1,strlen(str+j+1)+1);
				j--;
			}
			if(flag==1)
			{
				printf("%c ",str[i]);
				flag=0;
			}
		}
	}
}
			

