 // Kuriyama Mirai's Stones.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	int n;
	cin>>n;
	vector<ll> vc(n+1, 0);
	vector<ll> prefix_sum(n+1, 0);
	vector<ll> sorted_prefix_sum(n+1, 0);
	for(int i=1; i<=n; i++) {
		cin>>vc[i];
		prefix_sum[i] = prefix_sum[i-1] + vc[i];
	}

	sort(vc.begin(), vc.end());

	for(int i=1; i<=n; i++) {
		sorted_prefix_sum[i] = sorted_prefix_sum[i-1] + vc[i];
	}

	int m;
	cin>>m;
	for(int i=0; i<m; i++) {
		int type, l, r;
		cin>>type>>l>>r;
		if(type == 1) {
			cout<<prefix_sum[r] - prefix_sum[l-1]<<endl;
		} else {
			cout<<sorted_prefix_sum[r] - sorted_prefix_sum[l-1]<<endl;
		}
	}

	return 0;
}