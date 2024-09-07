// Klee's SUPER DUPER LARGE Array!!!.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int helper(ll n, ll k, ll sum) {
	ll l = k;
	ll h = k + n - 1;
	ll ans = 0;
	while(l<=h) {
		ll mid = l + (h-l)/2;

		ll s1 = (mid)*(mid+1)/2 - (k-1)*(k)/2;
		ll s2 = sum - (mid+1)*(mid)/2;

		if(s1 == s2) {
			return mid;
		}

		if(s1 < s2) {
			ans = mid;
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	}

	return ans;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		ll n, k;

		cin>>n>>k;

		ll s = (n+k-1)*(n+k)/2;
		int mid = helper(n, k, s);
		int ans1 = abs((s - (mid*(mid+1)/2)) - ((mid * (mid+1)/2) - k*(k-1)/2));
		int ans2 = abs((s - ((mid+1)*(mid+2)/2)) - (((mid+1) * (mid+2)/2) - k*(k-1)/2));
		cout<<min(ans1, ans2)<<endl;
	}
	return 0;
}