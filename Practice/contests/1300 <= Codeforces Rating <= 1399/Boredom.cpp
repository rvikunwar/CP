// Boredom.cpp


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main () {
	int n;
	cin>>n;
	vector<ll> vc(100001, 0);
	int maxi = 0; 
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		maxi = max(val, maxi);
		vc[val]++;
	}

	vector<ll> dp(100001, 0);
	dp[1] = vc[1];
	for(int i=2; i<100001; i++) {
		dp[i] = max(dp[i-1], dp[i-2] + vc[i]*i);
	}

	cout<<dp[maxi]<<endl;
 	return 0;
}