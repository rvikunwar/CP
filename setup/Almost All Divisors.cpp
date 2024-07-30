// Almost All Divisors.cpp

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<int> vc(n, 0);

		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		sort(vc.begin(), vc.end());

		if(vc.size() % 2 == 1) {
			cout<<-1<<endl;
		} else {
			int i=1, j=n-2;
			int flag = 1;
			int ans = vc[0] * vc[n-1];
			while(i<j) {
				if(vc[i] * vc[j] != ans) {
					flag = 0;
					break;
				}
				i++;
				j--;
			}

			if(flag) {
				cout<<ans<<endl;
			} else {
				cout<<-1<<endl;
			}
		}

	}
	return 0;
}
