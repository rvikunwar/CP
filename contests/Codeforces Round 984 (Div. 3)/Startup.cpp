// Startup.cpp
// Quintomania.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;

		map<int, int> mp;
		for(int i=0; i<k; i++) {
			int a, b;
			cin>>a>>b;
			mp[a] += b;
		}

		priority_queue<int> pq;
		for(auto it: mp) {
			pq.push(it.second);
		}

		int i = 0;
		int ans = 0;
		while(i<n && !pq.empty()) {
			ans += pq.top();
			pq.pop();
			i++;
		}

		cout<<ans<<endl;
	}
	
	return 0;
}