#include <bits/stdc++.h>
using namespace std;


int main() { 
    int n;
    cin>>n;

    vector<int> vc(n, 0);
    vector<int> prefix_sum(n+1, 0);
    for(int i=0; i<n; i++) {
        cin>>vc[i];
        prefix_sum[i+1] = prefix_sum[i] + vc[i];
    }

    if(prefix_sum[n] == 0) {
        cout<<0<<endl;
        return 0;
    }

    if(prefix_sum[n] == 1) {
        cout<<1<<endl;
        return 0;
    }

    long long ans = 1;
    int i=0;
    int check = 0;
    int count = 0;
    while(i<n) {
        if(vc[i] == 1) {
            check++;
            if(count > 0) {
                ans *= count;
            }
            count = 0;
        }

        if(prefix_sum[i+1] == check && check != 0) {
            count++;
        }
        i++;
    }

    cout<<ans<<endl;


    return 0;
}