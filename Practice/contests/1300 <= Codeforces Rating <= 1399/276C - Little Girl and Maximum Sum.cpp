// Little Girl and Maximum Sum.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, q;
	cin>>n>>q;

	vector<ll> vc(n+1, 0);
	for(int i=1; i<=n; i++) {
		cin>>vc[i];
	}

	vector<int> queries(n+2, 0);
	for(int i=0; i<q; i++) {
		int l, r;
		cin>>l>>r;
		queries[l]++;
		queries[r+1]--;
	}

	vector<int> pre_queries(n+1, 0);
	for(int i=1; i<=n; i++) {
		pre_queries[i] = pre_queries[i-1] + queries[i];
	}

	sort(pre_queries.begin(), pre_queries.end());
	sort(vc.begin(), vc.end());

	ll ans = 0;

	for(int i=1; i<=n; i++) {
		ans += (pre_queries[i] * vc[i]);
	}

	cout<<ans<<endl;
	return 0;
}