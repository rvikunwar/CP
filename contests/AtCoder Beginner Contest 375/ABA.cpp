// ABA.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin>>s;
	int n = s.size();

	vector<ll> dp(n, 0);
	unordered_map<char, int> appear;
	unordered_map<char, int> last;

	int i=0;
	ll ans = 0;
	while(i < n) {
		char ch = s[i];
		if(last.find(ch) != last.end()) {
			int lastIndex = last[ch];
			ll curr = i - lastIndex - 1;
			dp[i] = (curr) * appear[ch] + dp[lastIndex] + appear[ch] - 1;
			ans += dp[i]; 
		}
		last[ch] = i;
		appear[ch]++; 
		i++;
	}

	cout<<ans<<endl;

	return 0;
}