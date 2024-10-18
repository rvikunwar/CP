// Stirling Numbers of the Second Kind.cpp

// recursive approach . . .
int f(int n, int k) {
	if(n == 0 && k == 0) return 1;
	if(n == 0 || k == 0) return 0;
	if(n == k || k == 1) return 1;
	if(k > n) return 0;
	
	return k * f(n-1, k) + f(n-1, k-1);
}


// Dp tabular approach . . .
int f(int n, int k) {
	if(n == 0 && k == 0) return 1;
	if(n == 0 || k == 0) return 0;
	if(n == k || k == 1) return 1;
	if(k > n) return 0;

	vector<vector<int>> dp(n+1, vector<int> (k+1, 0));
	dp[0][0] = 1;
	
	for(int i=1; i<n; i++) {
		for(int j=1; j<k; j++) {
			dp[i][j] = j*dp[i-1][j] + dp[i-1][j-1];
		}
	}
	return dp[n][k];
}

// Dp tabular optimized approach . . .
int f(int n, int k) {
	if(n == 0 && k == 0) return 1;
	if(n == 0 || k == 0) return 0;
	if(n == k || k == 1) return 1;
	if(k > n) return 0;

	vector<int> prev(k+1, 0);
	vector<int> cur(k+1, 0);
	prev[0] = 1;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<k; j++) {
			cur[j] = j*prev[j] + prev[j-1];
		}	
		prev = cur;
	}

	return cur[k];
}