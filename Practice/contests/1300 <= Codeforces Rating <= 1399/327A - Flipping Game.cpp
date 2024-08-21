 // Flipping Game.cpp
#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;

	vector<int> vc(n, 0);

	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	int m = -1, l = -1;
	int maxi = 0;
	int zeros = 0;

	int i=0, j=0;
	while(j < n) {
		if(vc[j] == 1) {
			zeros--;
		} else {
			zeros++;
			if(zeros > maxi) {
				m = i;
				l = j;
				maxi = zeros;
			}
		}
		j++;

		if(zeros <= 0) {
			i = j;
			zeros = 0;
		}
	}

	int ans = 0;
	if(maxi == 0) {
		cout<<0<<endl;
		return 0;
	} 

	for(int i=0; i<n; i++) {
		if(i >= m && i<= l) {
			if(vc[i] != 1) {
				ans++;
			}
		} else if(vc[i] == 1){
			ans++;
		}
	}

	cout<<ans<<endl;

	return 0;
}