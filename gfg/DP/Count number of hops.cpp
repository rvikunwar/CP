// Count number of hops.cpp
// https://www.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1?page=2&sortBy=submissions


typedef long long ll;
int mod = 1000000007;

class Solution
{
    public:
    vector<int> dp;
    ll helper(int step, int n) {
        if(step > n) {
            return 0;
        }
        
        if(step == n) {
            return 1;
        }    
        
        if(dp[step] != -1) {
            return dp[step];
        }
         
        ll ans = 0;
        ans = (ans + helper(step+1, n))%mod;
        ans = (ans + helper(step+2, n))%mod;
        ans = (ans + helper(step+3, n))%mod;
        
        return dp[step] = ans%mod;
    }
    
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {   
        dp.resize(n+1, -1);
        return helper(0, n);        
    }
};
