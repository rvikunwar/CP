// Sakurako, Kosuke, and the Permutation.cpp


// Sakurako's Field Trip.cpp
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

		vector<int> vc(n+1, 0);
		vector<int> mp(n+1, 0);
		for(int i=1; i<=n; i++) {
			cin>>vc[i];
			mp[vc[i]] = i;
		}

		int ans = 0;
		for(int i=1; i<=n; i++) {
			if(vc[i] == i) {
				continue;
			}

			if(vc[vc[i]] == i) {
				continue;
			}

			int ele = vc[i];
			int f = mp[i];
			
			mp[vc[f]] = vc[i];
			mp[vc[ele]] = f;
			swap(vc[f], vc[ele]);
			ans++;
		}

		cout<<ans<<endl;
	}
	return 0;
}