/*
using: Arithmetic progression, be more specific is the nth separate sum.
if test of the equation: n^2 + n - 2*Sn = 0 is a integer. that Sn is the right number.

that mean: sqrt ( 1 + 8*n) is a integer.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main () {
    // n is the dot number.
    long n;
    
    cin >> n;

    
    long temp = 1 + 8*n;
    if ((double)sqrt(temp) == long (sqrt(temp)) ){
        cout << "YES";
    }else cout << "NO";
    
}