 // Meaning Mean.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


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
		int m = (vc[0] + vc[1])/2;

		for(int i=2; i<n; i++) {
			m = (m + vc[i])/2;
		}

		cout<<m<<endl;
	}

	return 0;
}