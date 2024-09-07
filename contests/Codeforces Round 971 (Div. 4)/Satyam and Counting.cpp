// Satyam and Counting.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		map<pii, int> mp;
		for(int i=0; i<n; i++) {
			int a, b;
			cin>>a>>b;
			pii p = {a,b};
			mp[p] = 1;
		}

		int count = 0;
		int ans = 0;
		for(auto it: mp) {
			int x = it.first.first;
			int y = it.first.second;
			int y_not = 1 - y;
			int x_not = 1 - x;

			pii s = {x, y_not};
			if(mp.find(s) != mp.end() && mp[s] != 2) {
				mp[s] = 2;
				mp[it.first] = 2;
				count++;
			}

			if(y == 1) {
				pii s1 = {x-1, 0};
				pii s2 = {x+1, 0};
				if(mp.find(s1) != mp.end() && mp.find(s2) != mp.end()) {
					ans++;
				}
			}

			if(y == 0) {
				pii s1 = {x-1, 1};
				pii s2 = {x+1, 1};
				if(mp.find(s1) != mp.end() && mp.find(s2) != mp.end()) {
					ans++;
				}
			}
		}

		ans += (count * (n-2));
		cout<<ans<<endl;

	}

	return 0;
}