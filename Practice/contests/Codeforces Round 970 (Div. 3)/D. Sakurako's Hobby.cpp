// D. Sakurako's Hobby.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int helper(int index, int n, int start, vector<int> &dp, string& s, vector<int> &p, int &is_cycle, vector<int> & cycle_parent) {
	if(index > n) {
		return 0;
	}

	if(p[index-1] == index) {
		return s[index-1] == '0';
	}
	if(dp[index-1] != -1) {
		return dp[index-1];
	}
	int next = p[index-1];
	int is_black = s[index-1] == '0';
	if(next == start) {
		is_cycle = 1;
		cycle_parent[index] = start;
		return is_black;
	}
	
	int ans = is_black + helper(next, n, start, dp, s, p, is_cycle, cycle_parent);
	cycle_parent[index] = start;
	return dp[index-1] = ans;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		vector<int> p(n, 0);
		for(int i=0; i<n; i++) {
			cin>>p[i];
		}		

		string s;
		cin>>s;

		vector<int> dp(n, -1);
		vector<int> cycle_parent(n+1, 0);
		vector<int> ans(n, 0);
		for(int i=1; i<=n; i++) {
			int is_cycle = 0;
			if(cycle_parent[i]) {
				cout<<dp[cycle_parent[i] - 1]<<" ";
			} else {
				cout<<helper(i, n, i, dp, s, p, is_cycle, cycle_parent)<<" ";
			}
			
		}
		cout<<endl;
	}

	return 0;
}