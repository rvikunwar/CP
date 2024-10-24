// Sakurako and Water.cpp

// Sakurako and Kosuke.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		vector<vector<int>> grid(n, vector<int> (n, 0));

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++) {
				cin>>grid[i][j];
			}
		}
		
		ll ans = 0;
		for(int i=n-1; i>=0; i--){
			int mini = 0;
			int k = i;
			int j = 0;
			while (k<n && j<n) {
			    mini = min(mini, grid[k][j]);
			    k++;
			    j++;
			}
			ans += abs(min(mini,  0));
		}

		for(int i=1; i<n; i++){
			int mini = 0;
			int k = i;
			int j = 0;
			while (k < n && j < n) {
			    mini = min(mini, grid[j][k]);
			    k++;
			    j++;
			}
			ans += abs(min(mini, 0));
		}

		cout<<ans<<endl;
	}
	return 0;
}