// 1D Keyboard.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	string s;
	cin>>s;

	unordered_map<char, int> mp;

	for(int i=0; i<26; i++) {
		mp[s[i]] = (i+1);
	}

	int curr = mp['A'];
	int i = 0; 
	int ans = 0;

	while(i < 26) {
		char ch = 'A' + i;
		int pos = mp[ch];
		int dist = abs(pos - curr);
		curr = pos;
		ans += (dist);
		i++;
	}

	cout<<ans<<endl;
	return 0;
}