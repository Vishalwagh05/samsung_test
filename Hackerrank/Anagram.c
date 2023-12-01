/* 
 * Check if two strings are anagrams of each other.
WTD: Determine if two provided strings can be rearranged to form each other, meaning
they are anagrams.
(e.g.: I/P: "listen" ,O/P: "silent")
*/

#include<stdio.h>
#include<string.h>

void anagram(char *s1,char *s2);
int main()
{
	char s1[20];
	char s2[20];
	int l1=0,l2=0;
	
	printf("Enter a string 1 : ");
	scanf("%s",s1);
	
	printf("Enter a string 2 : ");
	scanf("%s",s2);

	l1=strlen(s1);
	l2=strlen(s2);

	if(l1 != l2)
	{
		printf("Not an anagram string\n");
		return 0;
	}

	anagram(s1,s2);
}

void anagram(char *s1,char *s2)
{
	int i,j,cnt=0;
	int l1=0;

	l1=strlen(s1);

	for(i=0;s1[i];i++)
	{
		for(j=0;s2[j];j++)
		{
			if(s1[i]==s2[j])
				cnt++;
		}
	}

	if(cnt == l1)
		printf("Anagram string.\n");
	else
		printf("Not an anagram string.\n");
}
	
