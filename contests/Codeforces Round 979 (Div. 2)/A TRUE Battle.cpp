// A TRUE Battle.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		string s;
		cin>>s;

		int wins = 0;
		if(s[0] == '1' || s[n-1] == '1') {
			wins = 1;
		}

		for(int i=0; i<n-1; i++) {
			if(s[i] == '1' && s[i+1] == '1') {
				wins = 1;
				break;
			}
		} 

		if(wins) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}