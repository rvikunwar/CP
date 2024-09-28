// Order Book.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int n, s;
	cin>>n>>s;
	map<int, int> b;
	map<int, int> ss;

	for(int i=0; i<n; i++) {
		char d;
		int p;
		int q;

		cin>>d>>p>>q;	

		if(d == 'S') {
			ss[p] += q;
		} else {
			b[p] += q;
		}
	}

	vector<pii> vb;
	vector<pii> vs;

	for(auto &it: b) {
		vb.push_back({it.first, it.second});
	} 

	for(auto &it: ss) {
		vs.push_back({it.first, it.second});
	} 

	sort(vb.begin(), vb.end(), greater<pii>());

	while(vb.size() > s) {
		vb.pop_back();
	}


	while(vs.size() > s) {
		vs.pop_back();
	}

	sort(vs.begin(), vs.end(), greater<pii>());
	for(auto it: vs) {
		cout<<"S "<<it.first<<" "<<it.second<<endl;
	}


	for(auto it: vb) {
		cout<<"B "<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}