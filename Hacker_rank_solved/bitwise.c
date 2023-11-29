/* 
 *Example


The results of the comparisons are below:

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
For the and comparison, the maximum is . For the or comparison, none of the values is less than , so the maximum is . For the xor comparison, the maximum value less than  is . The function should print:

2
0
2
Function Description

Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format

The only line contains  space-separated integers,  and .

Constraints

Sample Input 0

5 4
Sample Output 0

2
3
3
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

  int result1=0,result2=0,result3,a,b,and=0,or=0,xor=0;
  a=n;
  b=k;
  for(int i=1;i<=a;i++)
  {
      for(int j=i+1;j<=a;j++)
      {
          result1=i&j;
          if(result1<k && and<result1)
          {
              and=result1;
          }
          result2=i|j;
          if(result2<k && or<result2)
          {
              or=result2;
          }
          result3=i^j;
          if(result3<k && xor<result3)
          {
              xor=result3;
          }

      }
  }
  printf("%d\n%d\n%d\n",and,or,xor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}


