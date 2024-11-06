// Reverse the Rivers.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

// comparator
bool compare(int a, int b) {
	if(a > b) {
		return true;
	}
	return false;
}

// gcd
int gcd(int a, int b) {
	while(b != 0) {
		int rem = a%b;
		a = b;
		b = rem;
	}
	return a;
}

// power
int modularExponentiation(int a, int b) {
	int val = 1;
	while(b != 0) {
		if(b%2 == 0) {
			a = a*a;
			b /= 2;
		} else {
			val = val*a;
			b--;
		}
	}
	return val;
}

int main() {
	int n, k, q;
	cin>>n>>k>>q;

	vector<vector<int>> vc(n, vector<int> (k, 0));

	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			int val;
			cin>>val;
			if(i != 0) {
				vc[i][j] = val | vc[i-1][j];
			} else {
				vc[i][j] = val;
			}
		}
	}

	vector<vector<int>> regions(k, vector<int> (n, 0));
	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			regions[j][i] = vc[i][j];
		}
	}

	int r, v;
	char o;

	for(int l=0; l<q; l++) {
		int m;
		cin>>m;
		int lo = 0; 
		int up = n-1;
		for(int i=0; i<m; i++) {
			cin>>r>>o>>v;
			if(o == '>') {
				auto val = upper_bound(regions[r-1].begin(), regions[r-1].end(), v);
				if(val != regions[r-1].end()) {
					int index = val - regions[r-1].begin();
				    lo = max(lo, index);    
				} else {
				    lo = n;    
				}
			} else {
				auto val = upper_bound(regions[r-1].rbegin(), regions[r-1].rend(), v, greater<int>());
				if(val != regions[r-1].rend()) {
					int index = (val.base() - regions[r-1].begin())-1;
				    up = min(up, index);			    
				} else {
				    up = -1;
				}
			}
		}
		if(lo <= up) {
			cout<<lo + 1<<endl;
		} else {
			cout<<-1<<endl;
		}
	}

	return 0;
}