// Strawberries.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;

	int i=1; 
	int c=1;
	int ans=0;
	int size = s.size();
	if(k == 1) {
		for(int i=0; i<size; i++) {
			if(s[i] == 'O') ans++;
		}
	} else {
		while(i < size) {
			if(s[i] == s[i-1] && s[i] == 'O' && s[i-1] == 'O') {
				c++;
				if(c == k) {
					ans++;
					c = 1;
					i++;
				}
			} else {
				c = 1;
			}
			i++;
		}
	}

	cout<<ans<<endl;
	return 0;
}