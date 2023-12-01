/* 
 * Reverse words in a given sentence without using any library method.
WTD: Invert the order of words in a given sentence, maintaining the order of characters
within each word.
(e.g.: I/P: "Hello Word" ,O/P: "World Hello")
*/


#include <stdio.h>
#include<string.h>

void reverse(char* start, char* end)
{
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
 
void reverse_words(char* s)
{
    char* start = s;
 
    char* temp = s;
 
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(start, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(start, temp - 1);
            start = temp + 1;
        }
    }
 
    reverse(s, temp - 1);
}
 
int main()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%[^\n]%*c",str);
	char* temp = str;
	reverse_words(str);
    	printf("%s\n", str);
   	 return 0;
}
