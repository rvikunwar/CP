// Max Ai+Bj.cpp


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;

	ll maxi_1 = INT_MIN;
	ll maxi_2 = INT_MIN;

	for(int i=0; i<n; i++) {
		ll val;
		cin>>val;
		maxi_1 = max(maxi_1, val);
	}

	for(int i=0; i<n; i++) {
		ll val;
		cin>>val;
		maxi_2 = max(maxi_2, val);
	}


	ll ans = maxi_1 + maxi_2;
	
	cout<<ans<<endl;

	return 0;
}