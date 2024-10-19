// Minimise Oneness.cpp

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

		string s = "1";
		for(int i=1; i<n; i++) {
			s += '0';
		}
		cout<<s<<endl;
	}
	return 0;
}