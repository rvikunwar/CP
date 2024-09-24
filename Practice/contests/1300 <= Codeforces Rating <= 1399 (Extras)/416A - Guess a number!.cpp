// Guess a number!.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;

	ll mn = -2 * 1e9;
	ll mx = 2* 1e9;

	string sign;
	ll val; 
	char ans;
	for(int i=0; i<n; i++) {
		cin>>sign>>val>>ans;

		if(ans == 'N'){
			if(sign == ">=") sign = "<";
			else if(sign == "<=") sign = ">";
			else if(sign == "<") sign = ">=";
			else if(sign == ">") sign = "<=";
		}

		if(sign == ">=") {
			mn = max(mn, val);
		}
		else if(sign == "<=") {
			mx = min(mx, val);
		}
		else if(sign == "<") {
			mx = min(mx, val-1);
		}
		else {
			mn = max(mn, val+1);
		}
	}

	if(mn<=mx) cout<<mn<<endl;
	else cout<<"Impossible"<<endl;
	return 0;
}