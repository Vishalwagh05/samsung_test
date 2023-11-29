/*Find the longest palindrome substring in a given string.
WTD: Identify the longest continuous sequence within the string that reads the same 
backward as forward.
(e.g.: I/P: "babad" ,O/P: "bab") */


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,n,m,len;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	len=strlen(str)-1;

	for(i=0;str[i];i++)
	{
		for(j=len;j>i;j--)
		{
			if(str[i] == str[j])
			{
				m=i;
				n=j;
				for(n,m;m<n;m++,n--)
				{
					if(str[m]!=str[n])
						break;
				}
				if(!(m<n))
				{
					for(i;i<=j;i++)
					{
						printf("%c",str[i]);
					}
					printf("\n");
					return 0;
				}
			}
		}
	}
}


