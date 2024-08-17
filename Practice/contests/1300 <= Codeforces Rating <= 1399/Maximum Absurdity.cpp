// Maximum Absurdity.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, k;
	cin>>n>>k;
	vector<ll> absd(n, 0);

	for(int i=0; i<n; i++) {
		cin>>absd[i];
	}

	vector<ll> prefix_sum(n+1, 0);

	for(int i=1; i<=n; i++) {
		prefix_sum[i] = prefix_sum[i-1] + absd[i-1];
	}

	vector<ll> dp(n+1, 0);

	int i = k;
	while(i <= n) {
		dp[i] = prefix_sum[i] - prefix_sum[i-k];
		i++;
	}

	vector<ll> prefix_max_dp(n+1, 0);
	vector<ll> prefix_max_index(n+1, 0);
	for(int i=1; i<=n; i++) {
		if(prefix_max_dp[i-1] >= dp[i]) {
			prefix_max_dp[i] = prefix_max_dp[i-1];
			prefix_max_index[i]= prefix_max_index[i-1];
		} else {
			prefix_max_dp[i] = dp[i];
			prefix_max_index[i] = i;
		}
	}

	int ans_1, ans_2;
	ll sum = 0;

	i = n;
	while((i-2*k) >= 0) {
		ll new_sum = dp[i] + prefix_max_dp[i-k];
		if(new_sum >= sum) {
			sum = new_sum;
			ans_1 = i-k+1;
			ans_2 = prefix_max_index[i-k] - k +1;
		}
		i--;
	}

	cout<<ans_2<<" "<<ans_1<<endl;
	return 0;
}