// Minimum Operations.cpp
// https://www.geeksforgeeks.org/problems/find-optimum-operation4504/1?page=2&sortBy=submissions


class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++) {
            if(i % 2 == 0) {
                int x = dp[i/2];
                if(x+1 < dp[i]) {
                    dp[i] = x+1;
                }
            } else {
                int x = dp[i-1];
                if(x + 1 < dp[i]) {
                    dp[i] = x + 1;
                }
            }
        }
        
        return dp[n];
        
    }
};