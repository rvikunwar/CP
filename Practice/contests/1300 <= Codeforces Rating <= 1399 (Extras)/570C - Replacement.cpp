 // Replacement.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;

	string s;
	cin>>s;

	int periods = 0;
	int i=0;

	while(i < n-1) {
		if(s[i] == '.' && s[i+1] == '.') {
			periods++;
		}
		i++;
	}

	while(m--) {
		int a;
		char b;
		cin>>a>>b;
		
		if((b == '.' && s[a-1] == '.') || (b != '.' && s[a-1] != '.')) {
			cout<<periods<<endl;
			continue;
		}
		
		s[a-1] = b;
		if(b == '.') {
			if(a-2 >= 0 && a < n && s[a] == '.' && s[a-2] == '.') {
				periods += 2;
			} else if((a-2 >= 0 && s[a-2] == '.') || (a < n && s[a] == '.')) {
				periods += 1;
			}		
		} else {
			if(a-2 >= 0 && a < n && s[a] == '.' && s[a-2] == '.') {
				periods -= 2;
			} else if((a-2 >= 0 && s[a-2] == '.') || (a < n && s[a] == '.')) {
				periods -= 1;
			}
		}

		cout<<periods<<endl;
	}

	return 0;
}