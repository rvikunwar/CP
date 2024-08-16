// Valera and Fruits.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n, v;

	cin>>n>>v;
	vector<int> days(3002, 0);

	for(int i=0; i<n; i++) {
		int a, b;
		cin>>a>>b;
		days[a] += b;
	}

	int ans = 0;

	for(int i=1; i<3002; i++) {
		int val = min(days[i-1], v);
		ans += val;

		val = v - val;
		ans += min(days[i], val);
		days[i] -= min(days[i], val);
	}

	cout<<ans<<endl;
	return 0;
}