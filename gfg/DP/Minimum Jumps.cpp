// Minimum Jumps.cpp
// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&sortBy=submissions

vector<int> dp;
int n;
int helper(int index, vector<int>& arr){
	if(index >= n-1) {
		return 0;
	}
	if(dp[index] != -1) {
		return dp[index];
	}
	int ans = INT_MAX;
	int jump = arr[index];
	for(int i=1; i<=jump; i++) {
		int next_pos = index + i;
		if(next_pos < n) {
			ans = min(ans, 1 + helper(next_pos));
		}
	}

	return dp[index] = ans;
}

// Memo
int minJumps(vector<int>& arr) {
    n = arr.size();
    dp.resize(n, -1);
    return helper(0, arr);
}

// Tabular
int minJumps(vector<int>& arr) {
    n = arr.size();
    dp.resize(n, -1);

    if(arr[0] == 0) {
    	return -1;
    }

    for(int i=0; i<n; i++) {
    	for(int j=0; j<i; j++) {
    		if(i <= j + arr[j] && dp[j] != -1) {
    			dp[i] = dp[j] + 1;
    			break;
    		}
    	}
    }

    return dp[n-1];
}

//Optimized
int minJumps(vector<int>& arr) {
    int n = arr.size();
    int ans = 1;
    int i = 0;
    if(arr[0] == 0) {
    	return -1;
    }

    int range = arr[0];
    int temp = range; 
    while(range < n-1) {

    	while(i < n &&i<=range) {
    		temp = max(temp, i + arr[i]);
    		i++;
    	}

    	if(temp == range) {
    		return -1;
    	}

    	range = temp;
    	ans++;
    }

    return ans;
}