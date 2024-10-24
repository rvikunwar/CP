// Sakurako's Field Trip.cpp
// Sakurako and Kosuke.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int count(vector<int> &vc, int n) {
	int ans = 0;
	for(int i=0; i<n-1; i++) {
		if(vc[i] == vc[i-1]) {
			ans++;
		}
	}
	return ans;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<int> vc(n, 0);
		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		int ans = count(vc, n);

		int i = 0;

		while(i < n/2) {
			int m = n-(i+1)-1;
			int curr = vc[i];
			int mirr = vc[m];
			if(vc[i] == vc[i+1]) {
				swap(vc[i+1], vc[m]);
			}
			i++;
		}

		ans = min(ans, count(vc, n));

		while(i < n-1) {
			int m = n - (i+1) - 1;
			int curr = vc[i];
			int mirr = vc[m];
			if(vc[i] == vc[i+1]) {
				swap(vc[i+1], vc[m]);
			}
			i++;
		}

		ans = min(ans, count(vc, n));

		cout<<ans<<endl;
	}
	return 0;
}