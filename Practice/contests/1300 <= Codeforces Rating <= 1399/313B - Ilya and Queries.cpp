// Ilya and Queries.cpp
#include<bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin>>s;
	int n = s.size();
	int i=0, j=1;
	vector<int> e(n+1, 0);
	vector<int> pre(n+1, 0);
	while(j<n) {
		if(s[i] == s[j]) {
			e[i+1]++;
		}
		j++;
		i++;
	}

	for(int i=1; i<=n; i++) {
		pre[i] = pre[i-1] + e[i];
	}

	int m;
	cin>>m;
	for(int i=0; i<m; i++) {
		int l, r;
		cin>>l>>r;
		cout<<pre[r-1] - pre[l-1]<<endl;
	}

	return 0;
}