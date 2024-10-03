// 0 - 1 Knapsack Problem.cpp
// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?page=2&sortBy=submissions


class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n = wt.size();
        vector<vector<int>> dp(n+1, vector<int> (W+1, 0));
        
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=W; j++) {
                if(j >= wt[i-1]) {
                    dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][max(0, j-wt[i-1])]);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][W];
    }
};