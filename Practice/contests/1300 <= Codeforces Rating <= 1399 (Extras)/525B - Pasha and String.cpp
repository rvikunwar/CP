// Pasha and String.cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	string s;
	cin>>s;

	int m;
	cin>>m;

	vector<int> vc(m, 0);
	int s_size = s.size();
	vector<int> pre(s_size/2, 0);

	for(int i=0; i<m; i++) {
		cin>>vc[i];
		pre[vc[i]-1]++;
	} 
	
	for(int i=1; i<s_size/2; i++) {
		pre[i] += pre[i-1];
	}

	int i = 0;
	while(i<s_size/2) {
		if(pre[i]%2 == 1) {
			swap(s[i], s[s_size-i-1]);
		}
		i++;
	}

	cout<<s<<endl;
	return 0;
}