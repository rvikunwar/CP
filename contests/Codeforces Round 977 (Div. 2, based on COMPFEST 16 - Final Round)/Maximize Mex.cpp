// Maximize Mex

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) { 
		int n, x;
		cin>>n>>x;

		vector<int> vc(n, 0);
		for(int i=0; i<n; i++){
			cin>>vc[i];
		}

		sort(vc.begin(), vc.end());

		int exp = 0;
		unordered_map<int, int> mp;
		int flag = 1;
		int j = 0;
		while(j < n) {
			if(exp == vc[j]) {
				if(mp[vc[j]] == 1) {
					mp[vc[j]%x]++;
				} else {
					mp[vc[j]]++;
				}
				exp++;
				j++;
			} else if(exp > vc[j]) {
				if(mp[vc[j]] == 1) {
					mp[vc[j]%x]++;
				} else {
					mp[vc[j]]++;
				}
				j++;
			} else {
				int mod = exp%x;
				if(mp.find(mod) != mp.end() && mp[mod] > 1) {
					mp[mod]--;
					mp[exp]++;
				} else {
					cout<<exp<<endl;
					flag = 0;
					break;
				}
				exp++;
			}
			
		}

		if(!flag) {
			continue;
		}

		while(true) {
			int mod = exp%x;
			if(mp.find(mod) != mp.end() && mp[mod] > 1) {
				mp[mod]--;
				mp[exp]++;
			} else {
				break;
			}
			exp++;
		}

		cout<<exp<<endl;
	}
	return 0;
}