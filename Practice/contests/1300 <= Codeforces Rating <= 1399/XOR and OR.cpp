// XOR and OR.cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {

	string s1, s2;
	cin>>s1>>s2;

	if(s1.size() != s2.size()) {
		cout<<"NO"<<endl;
		return 0;
	}

	if(s1.size() == 1) {
		if(s1 == s2) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}

		return 0;
	}

	int size = s1.size();
	int i = 0;
	int c1 = 0;
	int c2 = 0;
	while(i < size) {
		if(s1[i] == '1') {
			c1++;
		}

		if(s2[i] == '1') {
			c2++;
		}
		i++;
	}

	if((c1 > 0 && c2 > 0) || (c1 == 0 && c2 == 0)){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

	return 0;
}
