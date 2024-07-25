#include<bits/stdc++.h>
using namespace std;

long long get_mask(long long val) {
    long long mask = 0;
    int count = 0;
    while(val) {
        mask = (mask) ^ (1<<count);
        count++;
        val = val >> 1;
    }

    return mask;
}

int main() {
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    mp[0] = 0;
    long long i = n;
    long long ans = 0;
    while(i > 0) {
        if(mp.find(i) == mp.end()) {
            long long mask_i = get_mask(i);
            long long not_ = ~i;
            not_ = not_ & mask_i;          
            mp[not_] = i;
            mp[i] = not_;
            ans += ((not_^i)*2);
        }
        i--;
    }

    cout<<ans<<endl;
    for(int i=0; i<=n; i++) {
        cout<<mp[i]<<" ";
    }
    return 0;
}