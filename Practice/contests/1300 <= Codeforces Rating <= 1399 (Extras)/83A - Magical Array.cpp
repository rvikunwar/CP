// Magical Array.cpp
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
	int n;
	cin>>n;
	vector<int> vc(n, 0);

	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	int i = 0;
	int j = 0;
	ll ans = 0;

	while(j<n) {
		if(vc[i] == vc[j]) {
			j++;
		} else {
			ll ele = (j - i);
			ans += (ele*(ele+1)/2);
			i = j;
		}

	}

	ll ele = (j - i);
	ans += (ele*(ele+1)/2);
	cout<<ans<<endl;

	return 0;
}