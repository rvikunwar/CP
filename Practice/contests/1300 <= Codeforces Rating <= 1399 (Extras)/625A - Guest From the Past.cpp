// Guest From the Past.cpp
// https://codeforces.com/problemset/problem/625/A


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	ll n, a, b, c;
	cin>>n>>a>>b>>c;
	ll gCost = b-c;
	ll ans;
	if(a <= (gCost) || n < b) {
		ans = n/a;
	} else {
		ans = (n-b)/gCost + 1;
		ans += (n - (ans)*gCost)/a; 
	}

	cout<<ans<<endl;

	return 0;
}