// Home Garden.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int main() {
	int q;
	cin>>q;
	int day;
	ll height;
	ll currentDay = 0;
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	ll plant = 1;
	while(q--) {
		int t;
		cin>>t;
		if(t == 1) {
			pq.push({currentDay, plant});
			plant++;
		} 
		else if(t == 2) {
			cin>>day;
			currentDay += day;
		} 
		else {
			cin>>height;
			int ans = 0;
			while(!pq.empty()) {
				pii top = pq.top();
				ll day = top.first;
				ll diff = currentDay - day;
				if(diff >= height) {
					pq.pop();
					ans++;
				} else {
					break;
				}
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}