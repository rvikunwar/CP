// A Gift From Orangutan.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		vector<int> a(n, 0);
		int mini = INT_MAX;
		int maxi = 0;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(a[i] < mini) {
				mini = a[i];
			}
			if(a[i] > maxi) {
				maxi = a[i];
			}
		}

		vector<int> b(n, mini);
		vector<int> c(n, maxi);
		c[0] = mini;

		int ans = 0;
		for(int i=0; i<n; i++) {
			ans += (c[i] - b[i]);
		}

		cout<<ans<<endl;
	}

	return 0;
}