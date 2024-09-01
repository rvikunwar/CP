// B. Square or Not.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		ll ones = 0;
		ll zeros = 0;
		for(int i=0; i<s.size(); i++) {
			if(s[i] == '1') {
				ones++;
			} else {
				zeros++;
			}
		}

		if(ones%4 != 0) {
			cout<<"NO"<<endl;
		} else {
			ll div = ones/4;
			if(pow(div-1, 2) == zeros) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}


	}
	return 0;
}