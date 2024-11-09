// Sowing Stones.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

int main() {
	ll n, m;
	cin>>n>>m;
	ll total = 0;
	vector<pll> vc(m);
	for(int i=0; i<m; i++) {
		int a;
		cin>>a;
		vc[i].first = a;
	}

	for(int i=0; i<m; i++) {
		int a;
		cin>>a;
		total += a;
		vc[i].second = a;
	}

	if(total != n) {
		cout<<-1<<endl;
		return 0;
	}

	sort(vc.begin(), vc.end());

	int i = 0;
	ll ans = 0;
	ll currIndex = 1;
	ll extraStones = 0;
	while(i < m) {
		pll node = vc[i];
		ll nodeIndex = node.first;
		ll nodeStones = node.second;

		if(extraStones == 0) {
			if(nodeIndex > currIndex) {
				cout<<-1<<endl;
				return 0;
			} else {
				extraStones += (nodeStones - 1);
				currIndex++;
			}
		} else {
			if(nodeIndex > currIndex) {
				ll skipped = nodeIndex - currIndex;
				if(skipped <= extraStones) {
					ans += (skipped*(skipped + 1)/2);
					extraStones -= skipped;
					ans += ((skipped+1)*extraStones);
					extraStones += (nodeStones - 1);
					currIndex = nodeIndex + 1;
				} else {
					cout<<-1<<endl;
					return 0;
				}
			} else {
				ans += (extraStones);
				extraStones += (nodeStones - 1);
				currIndex++;
			}
		}
		i++;
	}

	ll skipped = n - currIndex + 1;
	ans += skipped*(skipped + 1)/2;
	cout<<ans<<endl;
	return 0;
}