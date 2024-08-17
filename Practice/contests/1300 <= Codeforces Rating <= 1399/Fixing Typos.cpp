// Fixing Typos.cpp
#include<bits/stdc++.h>
using namespace std;

int main () {
	string s;
	cin>>s;
	int n = s.size();

	for(int i=0; i<n; i++) {
		if(i+2 < n && s[i] == s[i+1] && s[i+1] == s[i+2]) {
			s[i] = '#';
		} else if (i+3 < n && s[i] == s[i+1] && s[i+2] == s[i+3]) {
			for(int j=i+3; j<n; j++) {
				if(s[i+2] == s[j]) {
					s[j] = '#';
				} else {
					i = j-1;
					break;
				}
			}
		}
	}

	string ans = "";
	for(int i=0; i<n; i++) {
		if(s[i] != '#') {
			ans += s[i];
		}
	}

	cout<<ans<<endl;
	return 0;
}