// Anya and 1100.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {

	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;
		int n = s.size();
		
		int q;
		cin>>q;
		vector<int> vc(n, 0);	
		string ch = "1100";
		int count = 0;
		for(int i=0; i<=n-4; i++) {
			int match = 1;
			for(int j=0; j<4; j++) {
				if(s[i+j] == ch[j]) {
					continue;
				} else {
					match = 0;
					break;
				}
			}
			if(match) {
				count++;
				vc[i] = 1;
			}
		}
		

		while(q--) {
			int i;
			char v;
			cin>>i>>v;
			s[i-1] = v;
			int start = max(i-4, 0);
			for(int k=start; k<min(start+4, n-4+1); k++) {
				int match = 1;
				for(int j=0; j<4; j++) {
					if(s[k+j] == ch[j]) {
						continue;
					} else {
						match = 0;
						break;
					}
				}
				if(match) {
					if(vc[k] == 0) {
						count++;
					}
					vc[k] = 1;
				} else {
					if(vc[k] == 1) {
						count--;
						vc[k] = 0;
					}
				}
			}
			if(count) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}
	}
	
	return 0;
}