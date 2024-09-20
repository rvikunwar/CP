 // Zhan's Blender.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, x, y;
		cin>>n;
		cin>>x>>y;

		int ans  = 0;
		if(x >= y) {
			ans = (n/y) + (n%y != 0);
		} else {
			ans = (n/x) + (n%x != 0);
		}
		cout<<ans<<endl;
	}
	return 0;
}