// Sereja and Bottles.cpp

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[1000], b[1000], c[1001] = {0};
	cin>>n;
	int ans = 0;
	for(int i=0; i<n; i++) {
		int u, v;
		cin>>u>>v;
		a[i] = u;
		b[i] = v;
		c[b[i]]++;
	}

	for(int i=0; i<n; i++) {
		c[b[i]]--;

		if(c[a[i]] == 0){
			ans++;
		} 
		c[b[i]]++;
	}

	cout<<ans<<endl;
	return 0;
}
