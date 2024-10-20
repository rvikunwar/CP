// Profitable Interest Rate.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

bool check(int mid, int a, int b) {
	int r = a - mid;
	b = b - 2*r;
	return b <= mid ? true: false;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		int a, b;
		cin>>a>>b;

		if(a >= b) {
			cout<<a<<endl;
			continue;
		}

		int l = 1;
		int r = a;
		int ans = 0;

		while(l <= r) {
			int mid = l + (r-l)/2;
			if(check(mid, a, b)) {
				ans = mid;
				l = mid + 1; 
			} else {
				r = mid - 1;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}