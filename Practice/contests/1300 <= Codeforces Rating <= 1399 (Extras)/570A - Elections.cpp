// Elections.cpp
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main () {
	int n, m;
	cin>>n>>m;

	vector<int> winner(m, 0);
	for(int i=0; i<m; i++) {
		pii pr = {1, 0};
		for(int j=0; j<n; j++) {
			int val;
			cin>>val;
			if(pr.second < val) {
				pr = {j+1, val};
			}
		}
		winner[i] = pr.first;
	}

	unordered_map<int, int> mp;
	pii pr = {1, 0};
	for(int i=0; i<m; i++) {
		mp[winner[i]]++;
		if(pr.second == mp[winner[i]]) {
			pr = {min(pr.first, winner[i]), mp[winner[i]]};
		} else if(pr.second < mp[winner[i]]) {
			pr = {winner[i], mp[winner[i]]};
		}
	}
	cout<<pr.first;
	return 0;
}