// Brightness Begins.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



bool helper(ll val, ll k) {
	ll sq = (ll)floor(sqrt((double)val)); 
	return ((val - sq) >= k) ? true: false;
}


int main() {
	int t;
	cin>>t; 
	while(t--) {
		ll k;
		cin>>k;
		ll lo = 1;
		ll hi = LLONG_MAX;
		ll ans = hi;
		while(lo <= hi) {
		    
			ll mid = lo + (hi-lo)/2;
			if(helper(mid, k)) {
				ans = mid;
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
