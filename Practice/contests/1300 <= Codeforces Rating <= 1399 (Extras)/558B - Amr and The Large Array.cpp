// Amr and The Large Array.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n;
	cin>>n;

	map<int, int> mp;
	unordered_map<int, int> l;
	unordered_map<int, int> r;

	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		mp[val]++;
		if(l.find(val) == l.end()) {
			l[val] = i;
		}
		r[val] = max(r[val], i);
	}

	int count = 0;
	int ans_l = 0;
	int ans_r = 0;
	for(auto &it: mp) {
		if(it.second > count) {
			ans_r = r[it.first];
			ans_l = l[it.first];
			count = it.second;
		} else if(it.second == count){
			if(ans_r - ans_l > r[it.first] - l[it.first]) {
				ans_r = r[it.first];
				ans_l = l[it.first];
			}
		}
	}

	cout<<ans_l+1<<" "<<ans_r+1<<endl;

	return 0;
}