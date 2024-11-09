// Static Range Sum Queries.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, q;
	cin>>n>>q;

	vector<int> vc(n, 0);

	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	vector<ll> pre(n+1, 0);
	for(int i=1; i<=n; i++) {
		pre[i] = pre[i-1] + vc[i-1];
	}

	while(q--) {
		int l, r;
		cin>>l>>r;

		ll ans = pre[r] - pre[l-1];
		cout<<ans<<endl;
	}
	return 0;
}