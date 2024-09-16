// Simple Game.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
	int n, m;
	cin>>n>>m;

	int left = m-1;
	int right = n-m;
	int ans = 1;

	if(left <= 0 && right <= 0) {
		cout<<1<<endl;
		return 0;
	}
	if(right > left) {
		ans = m+1;
	} else {
		ans = m-1;
	}
	cout<<ans<<endl;

	return 0;
}