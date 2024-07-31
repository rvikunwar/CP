// Almost All Divisors.cpp

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<long long> vc(n, 0);

		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		sort(vc.begin(), vc.end());

		
		int i=1, j=n-2;
		int flag = 1;
		long long ans = vc[0] * vc[n-1];
		while(i<j) {
			if(vc[i] * vc[j] != ans) {
				flag = 0;
				break;
			}
			i++;
			j--;
		}

		if((vc.size() % 2 == 1  && vc[n/2]*vc[n/2] == ans) || flag) {
			cout<<ans<<endl;
		} else {
			cout<<-1<<endl;
		}
	}
	return 0;
}
