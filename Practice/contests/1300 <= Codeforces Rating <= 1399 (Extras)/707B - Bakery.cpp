// Bakery
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int n, m, k;
	cin>>n>>m>>k;

	unordered_map<int, vector<pii>> g;
	for(int i=0; i<m; i++) {
		int v, u, l;
		cin>>u>>v>>l;

		g[u].push_back({v, l});
		g[v].push_back({u, l});
	}

	vector<int> vc(k, 0);
	unordered_map<int, int> city;
	for(int i=0; i<k; i++) {
		cin>>vc[i];
		city[vc[i]] = 1;
	}

	ll ans = LLONG_MAX;
	for(int i=0; i<k; i++) {
		int city_ = vc[i];
		for(auto it: g[city_]) {
			if(city.find(it.first) == city.end()) {
				ans = min(ans, (ll)it.second);
			}
		}
	}

	if(ans == LLONG_MAX) {
		cout<<-1<<endl;
	} else {
		cout<<ans<<endl;
	}

	return 0;
}