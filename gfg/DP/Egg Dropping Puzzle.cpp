// Egg Dropping Puzzle.cpp
// https://www.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1?page=2&sortBy=submissions

class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        vector<vector<int>> dp(n+1, vector<int> (k+1, 0));
        
        for(int i=0; i<=k; i++) {
            dp[1][i] = i;
        }
        
        for(int i=0; i<=n; i++) {
            dp[i][1] = 1;
        }
        
        dp[0][1] = 0;
        
        for(int i=2; i<=n; i++) {
            for(int j=2; j<=k; j++) {
                int ans = INT_MAX;
                for(int l=1; l<j; l++) {
                    ans = min(ans, max(dp[i-1][l-1], dp[i][j-l]));        
                }
                dp[i][j] = 1 + ans;
            }
        }
        
        return dp[n][k];
    }
};