/* 
 * Function Description

Complete the function, marks_summation in the editor below.

marks_summation has the following parameters:

int marks[number_of_students]: the marks for each student
int number_of_students: the size of marks[]
char gender: either 'g' or 'b'
Returns

int: the sum of marks for boys if  gender= b, or of marks of girls if grnder =g 
Input Format

The first line contains , denoting the number of students in the class, hence the number of elements in .
Each of the  subsequent lines contains .
The next line contains .
Constraints

 (where )
 =  or
Sample Input 0

3
3
2
5
b
Sample Output 0

8
Explanation 0

 = [3, 2, 5] and  = .

So, .

Sample Input 1

5
1
2
3
4
5
g
Sample Output 1

6
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int result=0,i;

  if(gender=='b')
  {
      for(i=0;i<number_of_students;i=i+2)
      {
          result=result+(marks[i]);
      }
  }
  if(gender=='g')
  {
      for(i=1;i<number_of_students;i=i+2)
      {
          result=result+marks[i];
      }
  }
  return result;

}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
