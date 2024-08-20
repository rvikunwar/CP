// Painting Eggs.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<pair<int, int>> vc;

	for(int i=0; i<n; i++) {
		int a,b;
		cin>>a>>b;

		vc.push_back({a, b});
	}

	int sa = 0, sb = 0;
	string s = "";
	for(int i=0; i<n; i++) {
		if(sa - sb + vc[i].first <= 500) {
			sa += vc[i].first;
			s += 'A';
		} else {
			sb += vc[i].second;
			s += 'G';
		}
	}

	if(abs(sa-sb) <= 500) {
		cout<<s<<endl;
	} else {
		cout<<-1<<endl;
	}

	return 0;
}