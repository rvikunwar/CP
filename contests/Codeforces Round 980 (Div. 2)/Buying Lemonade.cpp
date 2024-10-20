// Buying Lemonade.cpp


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;

		vector<ll> vc(n, 0);
		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		sort(vc.begin(), vc.end());
		vector<ll> pre(n+1, 0);
		for(int i=0; i<n; i++) {
			pre[i+1] = pre[i] + vc[i];
		}

		vector<ll> mul(n, 0);
		ll press = LLONG_MAX;
		for(int i=n-1; i>=0; i--) {
			mul[i] = vc[i] * (n-i);
			if(mul[i] >= (k- pre[i])) {
				press = min(press, k- pre[i] + i + pre[i]);
			}
		}
		cout<<press<<endl;
	}
	return 0;
}