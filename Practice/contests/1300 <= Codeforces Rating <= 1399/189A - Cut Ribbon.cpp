// Cut Ribbon.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a, b, c;
vector<int> dp;
int helper(int n, int cuts) {
	if(n == 0) {
		return cuts;
	}

	if(n < 0) {
		return 0;
	}

	if(dp[n] != -1) {
		return dp[n];
	}

	int ans = 0;
	ans = max(ans, helper(n-a, cuts+1));
	ans = max(ans, helper(n-b, cuts+1));
	ans = max(ans, helper(n-c, cuts+1));

	return dp[n] = max(0, ans - cuts);
}

int main() {
	cin>>n>>a>>b>>c;
	dp.resize(n+1, -1);

	int ans = helper(n, 0);
	cout<<ans<<endl;

	return 0;
}