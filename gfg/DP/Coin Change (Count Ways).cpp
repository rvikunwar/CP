// Coin Change (Count Ways).cpp
typedef long long ll;

// Solution 1
long long int count(int coins[], int N, int sum) {
	vector<vector<ll>> dp(N+1, vector<ll> (sum+1, 0));

	for(int i=0; i<=N; i++) {
		dp[i][0] = 1;
	}

	for(int i=1; i<N+1; i++) {
		for(int j=1; j<sum+1; j++) {
			dp[i][j] = dp[i-1][j] + ((j - coins[i-1] >=0) ? dp[i][j - coins[i-1]]: 0);
		}
	}

	return dp[N][sum];
}



// Solution 2
long long int count(int coins[], int N, int sum) {
	vector<ll> dp(sum+1, 0);
	dp[0] = 1;

	for(int i=1; i<N+1; i++) {
		for(int j=1; j<sum+1; j++) {
			if(coins[i-1] <= j) {
				dp[j] += dp[j - coins[i-1]];
			}
		}
	}

	return dp[sum];
}
