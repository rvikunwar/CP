#include <bits/stdc++.h>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        unordered_map<int, int> mp;
        for(int i=2; i*i<=n; i++){
            while(n%i == 0){
                n /= i;
                mp[i]++;
            }
        }
        if(n > 1){
            mp[n]++;
        }
        int count = 1;
        for(auto it: mp){
            count *= (it.second + 1);
        }

        cout<<count<<endl;
    }

    return 0; 
}