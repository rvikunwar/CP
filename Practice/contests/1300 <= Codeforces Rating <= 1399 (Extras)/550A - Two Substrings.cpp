// Two Substrings.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	string s;
	cin>>s;

	int p = 0;
	int f = 0;
	int f1 = 0;

	for(unsigned int i=0; i<s.size()-1; i++) {
		if(s[i] == 'A' && s[i+1] == 'B') {
			p = 1;
			f1 = i + 1;
			break;
		}
	}

	if(p == 1) {
		for(unsigned int i=f1+1; i<s.size()-1; i++) {
			if(s[i] == 'B' && s[i+1] == 'A') {
				f = 1;
				break;
			}
		}
	}

	if(f == 0) {
		p = 0;
		f1 = 0;
		for(unsigned int i=0; i<s.size()-1; i++) {
			if(s[i] == 'B' && s[i+1] == 'A') {
				p = 1;
				f1 = i + 1;
				break;
			}
		}

		if(p == 1) {
			for(unsigned int i=f1+1; i<s.size()-1; i++) {
				if(s[i] == 'A' && s[i+1] == 'B') {
					f = 1;
					break;
				}
			}
		}
	
	}
	
	if(f) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	

	return 0;
}