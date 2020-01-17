/*
O An Quan, exercise on "ictu.olp.cachhoc.net"
*/
#include<iostream>
using namespace std;

void InPut (int &n, int &k , int *&a) {
    cin >> n >> k;

    a = new int [n+1];
    for ( int i  =1 ; i <=n ; i++) {
        cin >> a[i];
    }
}


/*

Proceed: using temp to know how many rounds does a[k] take.
set a[k] = 0, and also add a[i] with temp;
*/
void Proceed (int n, int k, int *&a){ 
    int numK = a[k];
    int temp = numK / n;
    int temp2 = numK%n;

    a[k] = 0;
    for ( int i = 1 ; i <= n ; i++) {
        a[i] += temp;
    }
    k = k+1;

    while ( temp2 != 0) {
        if (k > n) {
            k =1;
        }else {
            a[k] += 1;
            temp2 --;
            k++;
        }
    }
}

int main () {

    int n, k, *a;
    InPut (n, k ,a);
    Proceed (n, k, a);

    for ( int i = 1 ; i <= n; i++) {
        cout << a[i] << " ";
    }
}