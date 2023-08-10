// question is : 
/*
B. Expression

Score: 1

CPU: 1s
Memory: 2048MB


Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers a, b, c on the blackboard. The task was to insert signs of operations '+' and '*', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

• 1+2*3=7

• 1*(2+3)=5

• 1* 2 *3=6

• (1+2)*3=9

Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9. Your task is: given a, b and c print the maximum value that you can get.


Input
The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).


Output
Print the maximum value of the expression that you can obtain.


Sample
Input	Output
1
2
3
output: 
9

*/




#include<bits/stdc++.h>
using namespace std;
void number(int a,int b, int c)
{
    int p= a+(b*c);
    int l=a*(b+c);
    int n=a*b*c;
    int z=(a+b)*c;

    if(p>l && p>n && p>z)
    printf("%d\n",p);
    else if(l>p && l>n && l>z)
   printf("%d\n",l);
    else if (n>p && n>l && n>z)
   printf("%d\n",n);
   // if(z>n && z>l && z>p)
     else printf("%d\n",z);

}
int main()
{
    int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
    number(a,b,c);

    return 0;
}
