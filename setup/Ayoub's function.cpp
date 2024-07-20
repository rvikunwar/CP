#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        long long n, m;

        cin>>n>>m;

        long long x = (n-m)/(m+1);

        long long y = (n-m)%(m+1);

        long long total = (n) * (n+1)/2;
        long long subs = y*((x+1) *(x+2))/2 + (m+1-y) *(x*(x+1))/2;

        long long ans = total - subs;
        cout<<ans<<endl; 

        
    }
    return 0;
}