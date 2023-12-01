/*
 *  Check if two strings are a rotation of each other.
WTD: Verify if one string can be obtained by rotating another string, indicating how many 
positions were involved in the rotation.
(e.g.: I/P: "abcde" "cdeab" ,O/P: "Rotation: 2L"(Obtaining String B by rotating String A))
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[20];
	int len,cnt=0;

	printf("Enter a string 1 : ");
	scanf("%s",str1);

	printf("Enter a string 2 : ");
	scanf("%s",str2);
       len = strlen(str2)-1;

	for(int i=len ; i >= 0 ; i--)
	{
		if(str1[0]==str2[i])
		{
			cnt++;
			printf("Rotation is %dL\n",cnt);
			return 0;
		}
		else
			cnt++;
	}

	return 0;
}
