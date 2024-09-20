// Modular Equations.cpp
// https://codeforces.com/problemset/problem/495/B

// Modulo operations
// a mod x = b => (a - b) mod x = 0;
// means (a-b) should be divisible by x.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {

	int a, b;
	cin>>a>>b;

	if(b > a) {
		cout<<0<<endl;
		return 0;
	}

	if(b == a) {
		cout<<"infinity"<<endl;
		return 0;
	}

	int diff = a - b;

	// needs to find factors of diff
	int ans = 0;
	for(int i=1; i<=sqrt(diff); i++) {
		if(diff % i != 0) continue; 
		if(i * i != diff) {
			if(i > b) ans++;
			if((diff/i) > b) ans++;
		} else {
			if(i > b) ans++;
		}
	}

	cout<<ans<<endl;


	return 0;
}