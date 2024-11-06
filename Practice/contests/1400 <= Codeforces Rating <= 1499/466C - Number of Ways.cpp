// Number of Ways.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
	int n;
	cin>>n;

	vector<ll> vc(n, 0);
	vector<ll> pre(n+1, 0);
	for(int i=0; i<n; i++) {
		cin>>vc[i];
		pre[i+1] = pre[i] + vc[i];
	}
	if(pre[n]%3 != 0) {
		cout<<0<<endl;
		return 0;
	}
	ll first = pre[n]/3;
	ll second = first * 2;

	ll i_count = 0;
	ll j_count = 0;
	ll ans = 0;
	for(int i=1; i<=n-1; i++) {
		if(i_count > 0) {
			if(pre[i] == second) {
				ans += (i_count);
			}
		}
		if(pre[i] == first) {
			i_count++;
		}
	} 

	cout<<ans<<endl;

	return 0;
}