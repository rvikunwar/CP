// Exponentiation.cpp
// https://cses.fi/problemset/task/1095/


// Your task is to efficiently calculate values a^b modulo 10^9+7.
// Note that in this task we assume that 0^0=1.
// Input
// The first input line contains an integer n: the number of calculations.
// After this, there are n lines, each containing two integers a and b.
// Output
// Print each value a^b modulo 10^9+7.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 0 \le a,b \le 10^9

// Example
// Input:
// 3
// 3 4
// 2 8
// 123 123

// Output:
// 81
// 256
// 921450052



#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;

int modpower(int a, int b){
    if(b==0) {
        return 1;
    }
    long long value = modpower(a, b/2);
    value = (value * value)%mod;
    if(b%2 == 1){
        value = (value*a)%mod;
    }
    return value;
}

int main() {

    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        cout<<modpower(a, b)<<endl;
    }
    return 0;
}