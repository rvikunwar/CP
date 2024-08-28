// Kitahara Haruki's Gift.cpp
# include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	int n;
	cin>>n;

	int sum100 = 0;
	int sum200 = 0;
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		if(val == 100) {
			sum100 += 100;
		} else {
			sum200 += 200;
		}
	}
	int half = (sum100 + sum200)/2;
	if (half % 100 == 0) {
		int mod = half%200;
		if(mod == 0 || mod <= sum100){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;

	return 0;
}