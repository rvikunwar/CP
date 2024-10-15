// Gargari and Bishops.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int n = 2000;
vector<vector<int>> vc(n, vector<int> (n, 0));
vector<ll> rDiag(n*2 + 1, 0);
vector<ll> lDiag(n*2 + 1, 0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin>>vc[i][j];

			rDiag[n + i - j] += vc[i][j];
			lDiag[i + j] += vc[i][j];
		}
	}

	ll ans = 0;
	int x1, y1, x2, y2;
	ll maxi_1 = -1;
	ll maxi_2 = -1;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			ll sum = rDiag[n + i - j] + lDiag[i + j] - vc[i][j];

			if((i+j) % 2 == 0) {
				if(maxi_1 < sum) {
					maxi_1 = sum;
					x1 = i+1;
					y1 = j+1;
				}
			} else {
				if(maxi_2 < sum) {
					maxi_2 = sum;
					x2 = i+1;
					y2 = j+1;
				}
			}
		}
	}

	cout<<maxi_1 + maxi_2<<endl;
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;

	return 0;
}