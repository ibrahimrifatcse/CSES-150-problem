/* question : D:

D. Stick to Triangle

Score: 1

CPU: 1s
Memory: 2048MB


You are given a stick of length N. You want to break it in three pieces such that it can form a triangle. In how many distinct triangles can you make? Two triangles are equal if all the side length is same when sorted in ascending order of length. So (1, 3, 2) is same to (3, 1, 2) because their side lengths are same is we sort them which is (1, 2, 3). But (1, 3, 4) is not same with (1, 2, 3). Suppose the lengths of three pieces are X, Y, Z respectively. Following constraints should be maintained:

X, Y, Z > 0.
X, Y, Z is an integer.
X + Y + Z = N
A triangle with zero area is considered a valid triangle. For example if N = 14, then there are 7 triangles: (1, 6, 7), (2, 5, 7), (2, 6, 6), (3, 4, 7), (3, 5, 6), (4, 4, 6), (4, 5, 5).


Input
First line will give you the number of test cases, T (T<=100). Then each line will have an integer N (0< N <= 300000).


Output
For each case print one line with the number of distinct triangles possible.

Sample
Input	Output
3
3
6
14

1
2
7

*/

// source code is

#include<bits/stdc++.h>
using namespace std;


void distinct_triangle(int n)
{

   if(n%2==0){
   double k= (pow((n+3),2))/48; // if given number is even we use this law
   int p= ceil(k);
   printf("%d",p);
   }

   else{ double j= pow(n,2)/48; // if given number is odd we use this law   
    int m = ceil(j);
    printf("%d",m);

   }

}
int main()
{
  int n,i,T;
  scanf("%d",&T);
  for(i=1;i<=T;i++){
  scanf("%d",&n);
  distinct_triangle(n);
  }

    return 0;
}



