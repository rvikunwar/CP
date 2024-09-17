 // More Cowbell.cpp
// https://codeforces.com/problemset/problem/604/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef long double ld;

bool is_feasible(vector<ll> &vc, ll mid, int n, int k) {

	int l = 0;
	int r =  n-1;
	int count = 0;

	while(l <= r) {
		if(l < r && vc[l] + vc[r] <= mid) {
			l++;
			r--;
		}
		r--;
		count++;
	}

	return count <= k;
}

int main() {
	int n, k;
	cin>>n>>k;

	vector<ll> vc(n ,0);
	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	if(n == 1){
		cout<<vc[0]<<endl;
		return 0;
	}

	ll lo = vc[n-1];
	ll hi = vc[0] + vc[n-1];
	ll ans = hi;

	while(lo <= hi) {
		ll mid = lo + (hi - lo)/2;
		if(is_feasible(vc, mid, n, k)) {
			hi = mid - 1;
			ans = mid;
		} else {
			lo = mid + 1;
		}
	}

	cout<<ans<<endl;
	return 0;
}