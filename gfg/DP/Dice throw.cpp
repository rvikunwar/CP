// Dice throw.cpp
// https://www.geeksforgeeks.org/problems/dice-throw5349/1?page=1&sortBy=submissions

// Approach 1 - memoization/ recursion
class Solution {
    private:
        vector<vector<ll>> dp;
        int x_;
        int m_;
        ll helper(int n, int sum) {
            if(sum < 0) {
                return 0;
            }
            
            if(sum == 0 && n == 0) {
                return 1;
            }
            
            if(n == 0){
                return 0;
            }
            
            if(dp[n][sum] != -1){
                return dp[n][sum];
            }
            
            ll ans = 0;
            for(int i=1; i<=m_; i++) {
                ans += helper(n-1, sum-i);
            }
            
            return dp[n][sum] = ans;
        }
  public:
    
    long long noOfWays(int m, int n, int x) {
        // code here
        x_ = x;
        m_ =  m;
        dp.resize(51, vector<ll> (51, -1));
        return helper(n, x);
    }
};


// Approach 2 - tabular
long long noOfWays(int m, int n, int x) {
    dp.resize(51, vector<ll> (51, 0));
    
    dp[0][0] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=x; j++) {
            for(int k=1; k<=min(j, m); k++) {
                dp[i][j] += dp[i-1][j-k];
            }
        }
    }
    
    return dp[n][x];
    // return helper(n, x);
}

