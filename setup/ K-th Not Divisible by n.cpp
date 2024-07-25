#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        int l = n - 1;
        long long a = k/l;
        long long m = k%l;
        long long ans = a*n + (m==0 ?-1: m);

        cout<<ans<<endl;
    }
    return 0;

}