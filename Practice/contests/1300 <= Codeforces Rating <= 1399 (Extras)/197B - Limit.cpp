// Limit.cpp
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b) {
	while(b != 0) {
		int rem = a%b;
		a = b;
		b = rem;
	}
	return a;
}

int main() {
	int n, m;

	cin>>n>>m;
	vector<int> num(n+1, 0);
	for(int i=0; i<n+1; i++) {
		cin>>num[i];
	}

	vector<int> den(m+1, 0);
	for(int i=0; i<m+1; i++) {
		cin>>den[i];
	}

	if(n > m) {
		if((num[0] < 0 && den[0] < 0) || (num[0] > 0 && den[0] > 0)) {
			cout<<"Infinity"<<endl;
		} else {
			cout<<"-Infinity"<<endl;
		}
		return 0;
	} else if(m > n) {
		cout<<"0/1"<<endl;
		return 0;
	} else {
		int a = abs(num[0]);
		int b = abs(den[0]);
		int gcd_ = gcd(a, b);
		string ans = to_string(a/gcd_) + "/" + to_string(b/gcd_);
		if((num[0] < 0 && den[0] < 0) || (num[0] > 0 && den[0] > 0)) {
			cout<<ans<<endl;
		} else {
			cout<<"-"<<ans<<endl;
		}
	}
	return 0;
}