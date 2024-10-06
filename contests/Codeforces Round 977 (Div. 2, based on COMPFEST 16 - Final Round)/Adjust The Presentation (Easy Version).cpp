// Adjust The Presentation (Easy Version).cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, m, q;
		cin>>n>>m>>q;

		vector<int> a(n, 0);
		vector<int> b(m, 0);

		for(int i=0; i<n; i++) {
			cin>>a[i];
		}

		for(int i=0; i<m; i++) {
			cin>>b[i];
		}

		unordered_map<int, int> mp;
		int i=0;
		int j=0;
		int flag = 1;
		int shifted = -1;
		while(i < n && j < m) {
			if(a[i] == b[j]) {
				j++;
				shifted = 0;
			} else {
				if(shifted == 0) {
					mp[a[i]] = 1;
					i++;
					shifted = -1;
					continue;
				}
				if(mp.find(b[j]) != mp.end()) {
					j++;
				} else {
					flag = 0;
					break;
				}
			}
		}

		if(flag) {
			cout<<"YA"<<endl;
		} else {
			cout<<"TIDAK"<<endl;
		}
	}

	return 0;
}
