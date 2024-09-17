// Max length chain.cpp
// https://www.geeksforgeeks.org/problems/max-length-chain/1?page=2&sortBy=submissions


// SOLUTION - 1 (LIS variation - DP)
class Solution{
public:
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        //Your code here
        sort(p, p + n, [](const val &p1, const val &p2) {
            return p1.first < p2.first;
        });
        
        vector<int> dp(n, 1);
        for(int i=1; i<n; i++) {
            for(int j=i-1; j>=0; j--) {
                if(p[i].first > p[j].second) {
                    dp[i] = 1 + dp[j];
                    break;
                }
            }
        }
        
        return dp[n-1];
    }
};


// SOLUTION - 2 (Greedy approach)
class Solution{
	public:
	    /*You are required to complete this method*/
	    bool static compare(const val &P1, const val &P2) {
	    	if(P1.second < P2.second) {
	    		return true;
	    	}
	    	return false;
	    }

	    int maxChainLen(struct val p[],int n){
	        //Your code here
	        sort(p, p+n, compare);
	        
	        int ans = 1;
	        int i = 1;
	        int last = p[0].second;
	        while(i < n) {
	        	if(p[i].first > last) {
	        		ans++;
	        		last = p[i].second;
	        	}
	        	i++;
	        }

	        return ans;
	    }
};