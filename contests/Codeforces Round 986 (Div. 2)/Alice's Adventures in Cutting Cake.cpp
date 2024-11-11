// Alice's Adventures in Cutting Cake.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mod = 1000000000 + 7;
int row[] = {1, 0, -1, 0};
int col[] = {0, -1, 0, 1};


int main() {
	
	int t;
	cin>>t;

	while(t--) {
		int n, m, v;
		cin>>n>>m>>v;

		vector<ll> vc(n, 0);
		vector<ll> preSum(n+2, 0);
		for(int i=0; i<n; i++) {
			cin>>vc[i];
			preSum[i+1] = preSum[i] + vc[i];
		}
		preSum[n+1] = preSum[n];

		ll sum = 0;
		vector<int> pre(m+1, 0);
		int pp = 1;
		for(int i=0; i<n; i++) {
			sum += vc[i];
			if(sum >= v) {
				pre[pp] = i + 1;
				
				pp++;
				sum = 0;
			}
			if(pp > m) break;
		}

		if(pp <= m) {
			cout<<-1<<endl;
			continue;
		}

		sum = 0;
		vector<int> suff(m+1, 0);
		pp = 1;
		suff[0] = n+1;
		for(int i=n-1; i>=0; i--) {
			sum += vc[i];
		
			if(sum >= v) {
				suff[pp] = i + 1;
				pp++;
				sum = 0;
			}
			if(pp > m) break;
		}

		int i = 0;
		ll ans = 0;
		while(i <= m) {
			int left = pre[i];
			int right = suff[m-i];

			ll diff = preSum[right-1] - preSum[left];
			ans = max(diff, ans);
			i++;
		}

		cout<<ans<<endl;
	}
	return 0;
}