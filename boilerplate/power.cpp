#include<bits/stdc++.h>
using namespace std;

int mod(int a, int b, int m) {
    return (a%m + b)%m;
}

int mul(int a, int b, int m) {
    return ((a%m) * (b%m))%m;
}

int main() {
    int a = 12;
    int b = 10;
    int m = 10e9 + 7;

    if (a == 0) {
        cout<<0<<endl;
        return 0;
    }
    if (a == 1){
        cout<<1<<endl;
        return 0;
    }

    int val = 1;
    while(b>0) {
        if (b % 2 == 0) {
            a = (a*a);
            b /= 2; 
        } else {
            val *= a;
            b--;
        }
    }
    return 0;
}