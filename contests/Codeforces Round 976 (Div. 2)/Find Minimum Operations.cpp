// Find Minimum Operations.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;
		int ans = 0;
		if(k == 1) {
			cout<<n<<endl;
			continue;
		}

		while(n) {
			ans += (n%k);
			n = n/k;
		}

		cout<<ans<<endl;
	}
	return 0;
}