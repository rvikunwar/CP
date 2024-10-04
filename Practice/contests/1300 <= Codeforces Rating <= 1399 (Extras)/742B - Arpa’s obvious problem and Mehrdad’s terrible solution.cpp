// Arpa’s obvious problem and Mehrdad’s terrible solution.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {

	int n, x;
	cin>>n>>x;
	unordered_map<int, int> mp;

	ll ans = 0;
	for(int i=0; i<n; i++) {
		int val;
		cin>>val;
		int xor_ = x^val;
		ans += (mp[xor_]);
		mp[val]++;
	}

	cout<<ans<<endl;
	return 0;
}