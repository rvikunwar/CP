#include <bits/stdc++.h>
using namespace std;


int main() { 

    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        if(k>=n) {
            cout<<1<<endl;
        } else {
            long long ans = n;
            long long b;
            for(long long i=1; i*i <= n; i++) {
                if(n%i == 0) {
                   b = n/i;
                }

                if(b <= k) {
                    ans = min(ans, i);
                } 
                
                if(i <= k) {
                    ans = min(ans, b);
                }
            }
 
            cout<<ans<<endl;
        }
    }
    return 0;
}