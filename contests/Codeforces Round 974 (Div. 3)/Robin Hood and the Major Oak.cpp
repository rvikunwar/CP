// Robin Hood and the Major Oak.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
	int t;
	cin>>t;

	while(t--) {
		ll n, k;
		cin>>n>>k;

		ll first = n - k;
		ll sum_1 = first * (first + 1)/2;

		ll second = n;
		ll sum_2 = second * (second + 1)/2;

		ll ans = sum_2 - sum_1;

		if(ans%2 == 0) {
			cout<<"yes"<<endl;
		} else {
			cout<<"no"<<endl;
		}
	}

	return 0;
}