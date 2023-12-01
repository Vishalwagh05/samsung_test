/*  
  Task

There is a series, s, where the next term is the sum of pervious three terms. Given the first three terms of the series,a ,b , and c respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.

Input Format

The first line contains a single integer,s .

The next line contains 3 space-separated integers,a ,b ,c and .

Constraints

Output Format

Print the nth term of the series, .

Sample Input 0

5
1 2 3
Sample Output 0

11  */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
   int result, t1 = a, t2 = b, t3 = c;
    if (n == 1)
        result = t1;
    else if (n == 2)
        result = t2;
    else if (n == 3)
        result = t3;
    else {
        for (int i = 4; i <= n; i++) {
            result = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = result;
        }
    }
    return result;

}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
