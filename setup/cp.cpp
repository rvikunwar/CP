#include <bits/stdc++.h>
using namespace std;


int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

    int n;
    cin>>n;

    unordered_map<long long, int> mp;

    int val;
    for(int i=1; i<=n; i++){
        cin>>val;
        mp[i] = val;
    }

    int m;
    cin>>m;

    int x, y;
    long long height = 0;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        if(mp[x] > height){
            cout<<mp[x]<<endl;
            height = mp[x] + y;
        } else {
            cout<<height<<endl;
            height += y; 
        }
    }
    return 0;
    
}