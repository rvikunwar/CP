// Building Permutation.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;

	vector<int> vc(n+1, 0);

	for(int i=1; i<=n; i++) {
		cin>>vc[i];
	}

	sort(vc.begin()+1, vc.end());
	ll ans = 0;

	for(int i=1; i<=n; i++) {
		ans = ans + abs(vc[i] - i);
	}

	cout<<ans<<endl;
	return 0;
}