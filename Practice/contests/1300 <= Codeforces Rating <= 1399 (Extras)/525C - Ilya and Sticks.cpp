// Ilya and Sticks.cpp
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

	sort(vc.begin(), vc.end());


	int i = n-1;
	ll ans = 0;
	
	while(i>0) {
		ll first_side = 0;
		while(i > 0) {
			if((vc[i] == vc[i-1]) || ((vc[i] - vc[i-1]) == 1)) {
				first_side = vc[i-1];
				i -= 2;
				break;
			}
			i--;
		}

		ll second_side = 0;
		while(i > 0) {
			if((vc[i] == vc[i-1]) || ((vc[i] - vc[i-1]) == 1)) {
				second_side = vc[i-1];
				i -= 2;
				break;
			}
			i--;
		}

		ans += (first_side * second_side);
	}

	cout<<ans<<endl;

	return 0;
}