// Preparing Olympiad.cpp
// https://codeforces.com/contest/550/problem/B


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int isOn(ll n, ll k) {
	if((n>>k) & 1) return 1;
	return 0;
}

int main() {
	ll n, l, r, x;
	cin>>n>>l>>r>>x;

	vector<ll> vc(n, 0);
	for(int  i=0; i<n; i++) {
		cin>>vc[i];
	}

	int ans = 0;
	for(ll subset=0; subset<(1<<n); subset++) {
		ll mn = 1e6  + 1;
		ll mx = 0;
		ll sum = 0;
		int ele = 0;
		for(int k=0; k<n; k++) {
			if(isOn(subset, k)) {
				ele++;
				mn = min(mn, vc[k]);
				mx = max(mx, vc[k]);
				sum += vc[k];
			}
		}

		if(ele >= 2 && l <= sum && r >= sum && ((mx - mn) >= x)) {
			ans++;
		}
	}

	cout<<ans<<endl;

	return 0;
}