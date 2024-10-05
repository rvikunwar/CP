// Takahashi san 2.cpp
// https://atcoder.jp/contests/abc374/tasks/abc374_a


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {

	string s;
	cin>>s;

	int n = s.size();
	if(n >= 3) {
		if(s[n-3] == 's' && s[n-2] == 'a' && s[n-1] == 'n') {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	} else {
		cout<<"No"<<endl;
	}
	return 0;
}