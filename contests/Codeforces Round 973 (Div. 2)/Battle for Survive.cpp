// Battle for Survive.cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		vector<ll> vc(n, 0);

		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		ll ans = 0;
		if(n == 2) {
			ans = vc[1] - vc[0];
			cout<<ans<<endl;
			continue;
		}

		ll sum = 0;
		for(int i=0; i<n-2; i++){
			sum += vc[i];
		}

		ans = vc[n-1] - (vc[n-2] - sum);
		cout<<ans<<endl; 
	}
	
	return 0;
}