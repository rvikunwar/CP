// Jzzhu and Sequences.cpp
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int m = 1000000000 + 7;

int mod(ll val) {
	return (val + m) % m;
}

int main() {

	ll x, y, n;
	cin>>x>>y;
	cin>>n;
	int ans;

	x = mod(x);
	y = mod(y);
	if((n-3) % 6 == 0) {
		ans = mod(y - x); 
	} 
	else if((n-4) % 6 == 0) {
		ans = mod(-1*x);
	} 
	else if((n-5) % 6 == 0) {
		ans = mod(-1*y);
	} 
	else if((n) % 6 == 0) {
		ans = mod(x-y);
	}
	else if((n-1) % 6 == 0) {
		ans = mod(x);
	}
	else if((n-2) % 6 == 0) {
		ans = mod(y);
	}

	cout<<ans<<endl;

	return 0;
}