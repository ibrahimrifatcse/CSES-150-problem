/*
A. Multiple of 17

Score: 1

CPU: 1s
Memory: 2048MB


Theorem: If you drop the last digit d of an integer n (n 10), subtract 5d from the remaining integer, then the difference is a multiple of 17 if and only if n is a multiple of 17.

For example, 34 is a multiple of 17, because 3-20=-17 is a multiple of 17; 201 is not a multiple of 17, because 20-5=15 is not a multiple of 17.

Given a positive integer n, your task is to determine whether it is a multiple of 17.


Input
There will be at most 10 test cases, each containing a single line with an integer n ( 1<= n <= 10^12). The input terminates with n = 0, which should not be processed.


Output
For each case, print 1 if the corresponding integer is a multiple of 17, print 0 otherwise.


Sample
Input	Output
34
201
2098765413
17171717171718
0	1
0
1
0
*/


#include <iostream>
using namespace std;

int check(int n){
    if(n%17 == 0 ){
        int rem;
        int d;
        d = n%10;
        rem = n/10;
        rem = (rem - (d*5));
        if(rem%17 ==0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int main(){
    int n[10];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        int k;
        scanf("%d", &k);
        if(k == 0 ){
            break;
        }else{
            n[i] = check(k);
            count++;
        }
    }
    for(int i = 0; i<count;i++){
        printf("%d\n", n[i]);
    }
    
    return 0;
}
