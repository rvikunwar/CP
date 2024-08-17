// k-Tree.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, d;
int mod = 1000000000 + 7;

ll mod_helper(ll val) {
	return (val + mod)%mod;
}

ll helper(int n, int cond, vector<vector<ll>> &dp) {
	if(n == 0 && cond) {
		return 1;
	}

	if(n < 0) {
		return 0;
	}

	if(n == 0 && !cond) {
		return 0;
	}

	if(dp[n][cond] != -1) {
		return dp[n][cond];
	}

	ll ans = 0;
	for(int i=1; i<=k; i++) {
		int cond_ = (i>=d || cond) ? 1: 0;
		ans = mod_helper(ans + helper(n-i, cond_, dp));
	}

	return dp[n][cond] = ans;
}

int main () {
	cin>>n>>k>>d;

	vector<vector<ll>> dp(101, vector<ll> (2, -1));

	ll ans = helper(n, 0, dp);
	cout<<ans<<endl;
	return 0;
}