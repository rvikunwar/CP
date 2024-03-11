#include <bits/stdc++.h>
using namespace std;


int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

    int t;
    cin>>t;
    while(t--){

        int n, m, x;
        cin>>n>>m>>x;

        queue<int> q;

        q.push(x);
        vector<int> ans(n+1, 0);
        int count = 0;

        for(int i=0; i<m; i++){
            int dis;
            char c;
            cin>>dis>>c;
            int size = q.size();
            unordered_map<int, int> mp;
            for(int j=0; j<size; j++){
                int val = q.front();
                q.pop();
                int newDist;
                if(c == '?'){
                    newDist = (val + dis)%n;
                    if(mp.find(newDist) == mp.end()){
                        q.push(newDist);
                        mp[newDist] = 1;
                    }
                    
                    if(m-1 == i && ans[newDist] == 0){
                        count++;
                        ans[newDist] = 1;
                    }
                    newDist = (n + val - dis)%n;
                    if(mp.find(newDist) == mp.end()){
                        q.push(newDist);
                        mp[newDist] = 1;
                    }
                    if(m-1 == i && ans[newDist] == 0){
                        count++;
                        ans[newDist] = 1;
                    }

                }
                else if(c == '0'){
                    newDist = (val + dis)%n;
                    if(mp.find(newDist) == mp.end()){
                        q.push(newDist);
                        mp[newDist] = 1;
                    }
                    if(m-1 == i && ans[newDist] == 0){
                        count++;
                        ans[newDist] = 1;
                    }
                }
                else {
                    newDist = (n + val - dis)%n;
                    if(mp.find(newDist) == mp.end()){
                        q.push(newDist);
                        mp[newDist] = 1;
                    }
                    if(m-1 == i && ans[newDist] == 0){
                        count++;
                        ans[newDist] = 1;
                    }
                }
            }
        }


        cout<<count<<endl;
        for(int i=1; i<=n; i++){
            if(ans[i] == 1){
                cout<<i<<" ";
            }
        }
        if(ans[0] == 1){
            cout<<n;
        }

        cout<<endl;
    }
    return 0;
    
}