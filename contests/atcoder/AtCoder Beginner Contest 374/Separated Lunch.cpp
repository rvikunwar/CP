// Separated Lunch.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int isOn(int n, int k) {
	if((n >> k) & 1) return 1;
	return 0;
}

int main() {
	int n;
	cin>>n;
	vector<int> vc(n, 0);
	ll total = 0;
	for(int i=0; i<n; i++) {
		cin>>vc[i];
		total += vc[i];
	}

	ll half = total/2;
	ll ans = total;
	for(int subset=0; subset<(1 << n); subset++ ) {
		ll sum  = 0;
		for(int k=0; k<n; k++) {
			if(isOn(subset, k)) {
				sum += vc[k];
			}
		}
		if(total%2 == 0) {
			if(sum >= half) {
				ans = min(sum, ans);
			}
		} else {
			if(sum > half) {
				ans = min(sum, ans);
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}