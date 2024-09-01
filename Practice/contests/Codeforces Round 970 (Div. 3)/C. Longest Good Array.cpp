// C. Longest Good Array.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		ll l, r;
		cin>>l>>r;

		r = r-l;
		ll ans = (-1 + sqrt(1 + 4*2*r))/2;
		cout<<ans+1<<endl;
	}
	return 0;
}