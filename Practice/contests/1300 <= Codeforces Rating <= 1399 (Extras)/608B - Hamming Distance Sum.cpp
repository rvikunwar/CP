// Hamming Distance Sum.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	string a, b;
	cin>>a>>b;

	int m = a.size();
	int n = b.size();
	int k = n - m + 1;

	vector<ll> pre(n+1, 0);

	for(int i=1; i<n+1; i++) {
		pre[i] = pre[i-1] + (b[i-1] == '0'? 0:1);
	}

	int i = 0;
	ll ans = 0;
	while(i < m) {
		int l = i + 1;
		int r = l + k - 1;

		ll countOnes = pre[r] - pre[l-1];
		ll countZeros = r - l + 1 - countOnes;

		if(a[i] == '1') {
			ans += countZeros;
		} else {
			ans += countOnes;
		}
		i++;
	}

	cout<<ans<<endl;

	return 0;
}