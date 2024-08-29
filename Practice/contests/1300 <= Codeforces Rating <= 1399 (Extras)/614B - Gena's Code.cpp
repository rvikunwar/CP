// Gena's Code.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll is_beautiful(string s) {
	ll zeros = 0;
	int ones = 0;

	for(unsigned int i=0; i<s.size(); i++) {
		if(s[i] == '0') {
			zeros++;
		}
		else if(s[i] == '1' && ones == 0) {
			ones++;
		} 
		else {
			return 0;
		}
	}
	return zeros;
}

int main() {
	int n;
	cin>>n;

	string non_beautiful = "0";
	ll zeros = 0;
	string ans = "";
	for(int i=0; i<n; i++) {
		string val;
		cin>>val;
		if(val == "1") continue;
		if(val == "0") {
			ans += '0';
		}
		ll v = is_beautiful(val);
		if(v){
			zeros += v;
		} else {
			non_beautiful = val;
		}
	}

	if(ans != "") {
		cout<<0<<endl;
		return 0;
	}
	
	if(non_beautiful != "0") {
		ans += non_beautiful;
	} else {
		ans += '1';
	}
	for(ll i=0; i<zeros; i++) {
		ans += '0';
	}

	cout<<ans<<endl;
	return 0;
}