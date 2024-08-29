// Vasya and Wrestling.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;
	vector<int> s1;
	vector<int> s2;
	ll sum1 = 0;
	ll sum2 = 0;
	int last;
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		if(val >= 0) {
			sum1 += val;
			s1.push_back(val);
		} else {
			sum2 += abs(val);
			s2.push_back(abs((val)));
		}

		if(i == (n-1)) {
			last = val < 0 ? 2:1;
		}
	}

	if(sum1 == sum2) {
		for(unsigned int i=0; i<min(s2.size(), s1.size()); i++) {
			int v1 = s1[i];
			int v2 = s2[i];

			if(v1 == v2)  continue;
			if(v1 > v2) {
				cout<<"first"<<endl;
			} else {
				cout<<"second"<<endl;
			}
			return 0;
		}
		if(s1.size() > s2.size()) {
			cout<<"first"<<endl;
		} 
		else if(s1.size() < s2.size()){
			cout<<"second"<<endl;
		} else if(last == 1) {
			cout<<"first"<<endl;
		} else {
			cout<<"second"<<endl;
		}

		return 0;
	}

	if(sum1 > sum2) {
		cout<<"first"<<endl;
	} else {
		cout<<"second"<<endl;
	}
	return 0;
}