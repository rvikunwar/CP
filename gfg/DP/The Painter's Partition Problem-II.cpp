// The Painter's Partition Problem-II.cpp
// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?page=1&sortBy=submissions


// DP SOLUTION
typedef long long ll;

class Solution
{
  public:
    vector<vector<int>> dp;
    vector<ll> pre_sum;
    
    void compute_sum(int n, int arr[]) {
        for(int k=0; k<n; k++) {
            pre_sum[k+1] = pre_sum[k] + arr[k];
        }
    }
    
    ll get_sum(int i, int j) {
        return pre_sum[j] - pre_sum[i];
    }
    
    
    ll helper(int n, int k, int arr[]) {
        
        if(k == 1){
            return get_sum(0, n);
        }
        
        if( n == 0) {
            return 0;
        }
        
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        
        ll ans = LLONG_MAX;
        for(int i=0; i<n; i++) {
            ll current_sum = get_sum(i, n);
            // cout<<current_sum <<" d "<<i<<" "<<n<<endl;
            ans = min(ans, max(current_sum, helper(i, k-1, arr)));
        }
        
        return dp[n][k] = ans;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        dp.resize(n+1, vector<int> (k+1, -1));
        pre_sum.resize(n+1, 0);
        compute_sum(n, arr);
        return helper(n, k, arr);
    }
};


// Binary solution

    ll get_max(int arr[], int n) {
        ll maxi = 0;
        for(int i=0; i<n; i++) {
            maxi = max(maxi, (ll)arr[i]);
        }
        
        return maxi;
    }
    
    ll total_sum(int arr[], int n) {
        ll sum = 0;
        for(int i=0; i<n; i++) {
            sum += (ll)arr[i];
        }
        
        return sum;  
    }
    
    int required_painters(int arr[], int n, int maxi) {
        ll total = 0;
        int k = 1;
        
        for(int i=0; i<n; i++) {
            total += arr[i];
            if(total > maxi) {
                k++;
                total = arr[i];
            }
        }
        return k;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        ll lo = get_max(arr, n);
        ll hi = total_sum(arr, n);
        
        int ans;
        while(lo <= hi) {
            ll mid = lo + (hi-lo)/2;
            if(required_painters(arr, n, mid) <= k) {
                ans = mid;
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        
        return ans;
    }

    