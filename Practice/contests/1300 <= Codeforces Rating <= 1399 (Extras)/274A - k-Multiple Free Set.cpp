// k-Multiple Free Set.cpp
#include<bits/stdc++.h>
using namespace std;

// int main () {
// 	int n, k;
// 	cin>>n>>k;
// 	vector<int> vc(n, 0);

// 	for(int i=0; i<n; i++) {
// 		cin>>vc[i];
// 	}

// 	sort(vc.begin(), vc.end());
// 	unordered_map<int, int> mp;

// 	int i=0;
// 	int count = 0;
// 	while(i < n) {
// 		if(vc[i] % k == 0) { 
// 			if(mp.find(vc[i]/k) == mp.end()) {
// 				count++;
// 				mp[vc[i]] = 1;
// 			} 
// 		} else {
// 			count++;
// 			mp[vc[i]] = 1;
// 		}

// 		i++;
// 	}

// 	cout<<count<<endl;

// 	return 0;
// }

int main () {
	int n, k;
	cin>>n>>k;
	vector<int> vc(n, 0);

	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	sort(vc.begin(), vc.end());
	vector<int> ans;

	int i=0;
	while(i < n) {
		if(vc[i] % k == 0) { 
			int ele = vc[i]/k;
			auto it = lower_bound(ans.begin(), ans.end(), ele);

			if((it == ans.end()) || (it != ans.end() && *it != ele)) {
				ans.push_back(vc[i]);
			}
		} else {
			ans.push_back(vc[i]);
		}
		i++;
	}

	cout<<ans.size()<<endl;

	return 0;
}