// Robin Helps.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;
		
		vector<int> vc(n, 0);
		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		int zeros = 0;
		int gold = 0;
		int ans = 0;
		for(int i=0; i<n; i++) {
			if(vc[i] >= k) {
				gold += vc[i];
			}

			if(gold > 0 && vc[i] == 0) {
				gold--;
				ans++;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}