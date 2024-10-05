// Unvarnished Report.cpp
// https://atcoder.jp/contests/abc374/tasks/abc374_b


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	string s, t;
	cin>>s>>t;

	int ss = s.size();
	int ts = t.size();

	if(ss == ts) {
		for(int i=0; i<ss; i++) {
			if(s[i] != t[i]) {
				cout<<i+1<<endl;
				return 0;
			}
		}
		cout<<0<<endl;
		return 0;
	} else {

		for(int i=0; i<min(ss, ts); i++) {
			if(s[i] != t[i]) {
				cout<<i+1<<endl;
				return 0;
			}
		}

		if(ss < ts) {
			cout<<ss+1<<endl;
		} else {
			cout<<ts+1<<endl;
		}
	}

	return 0;
}