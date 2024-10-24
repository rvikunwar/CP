// Sakurako and Kosuke.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int x = 0;
		int c = 1;
		while(x <= n && x >= (-1*n)) {
			if(c%2 == 0) {
				x = x - abs(2*c-1);
			} else {
				x = x + abs(2*c-1);
			}
			c++;
		}

		if(c%2 == 0) {
			cout<<"Sakurako"<<endl;
		} else {
			cout<<"Kosuke"<<endl;
		}
	}
	return 0;
}