// MUH and Important Things.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
	int n;
	cin>>n;
	vector<pii> vc;

	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		vc.push_back({val, i+1});
	}

	int first = -1;
	int second = -1;
	sort(vc.begin(), vc.end());
	for(int i=1; i<n; i++) {
		if(vc[i-1].first == vc[i].first) {
			if(first == -1) {
				first = i;
			} else {
				second = i;
			}
		}
	}

	if(first == -1 || second == -1) {
		cout<<"NO"<<endl;
		return 0;
	}

	cout<<"YES"<<endl;

	for(int i=0; i<3; i++) {
		if(i == 1){
			swap(vc[first] , vc[first-1]);
		} else if(i == 2) {
			swap(vc[second] , vc[second-1]);
		}
		for(int i=0; i<n; i++) {
			cout<<vc[i].second<<" ";
		}
		cout<<endl;
	}

	return 0;
}