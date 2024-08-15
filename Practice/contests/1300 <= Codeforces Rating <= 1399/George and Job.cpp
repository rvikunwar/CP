// George and Job.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<long long> vc;
	
long long f(int index, int k, int m, vector<vector<long long>> &dp) {
	int n = vc.size();
	if(index > n || (k*m > (n-index)) || k == 0){
		return 0;
	}

	if(dp[index][k] != -1){
		return dp[index][k];
	}

	long long ans = 0;
	long long sum = vc[index+m-1] - vc[index-1];
	ans = max(sum + f(index+m, k-1, m, dp), f(index+1, k, m, dp));

	return dp[index][k] = ans;
}

int main() {
	int n, m, k;
	cin>>n>>m>>k;
	vc.resize(n+1);
	vector<vector<long long>> dp(n+1, vector<long long> (k+1, -1));

	for(int i=1; i<n+1; i++) {
		long long val;
		cin>>val;
		vc[i] = vc[i-1] + val;
	}

	long long ans = f(1, k, m, dp);

	cout<<ans<<endl;

	return 0;
}