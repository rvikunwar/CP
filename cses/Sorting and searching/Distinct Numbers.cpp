// Distinct Numbers
// https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;
	int count = 0;
	map<int, int> mp;
	vector<int> vc(n, 0);
	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	for(int i=0; i<n; i++) {
		if(mp.find(vc[i]) == mp.end()) {
			count++;
			mp[vc[i]] = 1;
		}
	}

	cout<<count<<endl;

	return 0;
}