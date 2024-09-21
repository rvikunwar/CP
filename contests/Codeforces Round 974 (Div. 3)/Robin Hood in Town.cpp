// Robin Hood in Town.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
	int t;
	cin>>t;

	while(t--) {
		ll n;
		cin>>n;

		vector<ll> vc(n, 0);
		ll total_sum = 0;

		for(int i=0; i<n; i++) {
			cin>>vc[i];
			total_sum += vc[i];
		}

		if(n == 1 || n == 2) {
			cout<<-1<<endl;
			continue;
		}

		sort(vc.begin(), vc.end());


		double mean = (double)total_sum/(double)(n*2);

		ll mid = vc[n/2];
		if(mid < mean) {
			cout<<0<<endl;
			continue;
		}

		ll ans = (mid * (n*2)) - total_sum;
		cout<<ans+1<<endl;
	}

	return 0;
}