#include<bits/stdc++.h>

using namespace std;


long long custom_pow(long long a, long long b) {
    long long ans = 1;
    if(b==0) {
        return 1LL;
    }

    if(b==1) {
        return a;
    }

    long long res = 1;
    while(b) {
        if(b%2 == 1) {
            res = a *res;
            b--;
        } else {
            a = a*a;
            b /= 2;
        }
    }
    return res;
}

int main() {
    long long n;
    cin>>n;

    long long p = (2*n - 2);
    long long l = p - n;
    long long ans = (2 * 4 * 3 * custom_pow(4, l-1)) + ((l-1) * 4 * 9 * custom_pow(4, l-2));

    cout<<ans<<endl; 

    return 0;
}