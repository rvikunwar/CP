// Flag Day.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	vector<vector<int>> vc(m);
	map<int, int> mp;


	for(int i=0; i<m; i++) {
		int a, b, c;
		cin>>a>>b>>c;
		vc[i] ={a, b, c};
		vector<int> color(4, 0);
		if(mp.find(a) != mp.end()) {
			color[mp[a]] = 1;
		}

		if(mp.find(b) != mp.end()) {
			color[mp[b]] = 1;
		}

		if(mp.find(c) != mp.end()) {
			color[mp[c]] = 1;
		}

		for(int k=1; k<=3; k++) {
			if(color[k]) continue;
			for(int j=0; j<3; j++) {
				if(mp.find(vc[i][j]) == mp.end()) {
					mp[vc[i][j]] = k;
					color[k] = 1;
					break;
				}
			}
		}
	}

	for(auto it: mp) {
		cout<<it.second<<" ";
	}
	cout<<endl;

	return 0;
}