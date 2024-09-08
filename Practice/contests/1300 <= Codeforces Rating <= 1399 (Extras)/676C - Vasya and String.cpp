// Vasya and String.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int helper(string &s, int &n, char ch, int &k){
	int i = 0;
	int j = 0;
	int count = 0;
	int ans = 0;

	while(j < n) {
		if(count <= k) {
			if(s[j] == ch) count++;
			if(count <= k) {
				ans = max(ans, j-i+1);
			}
			j++;
		} else {
			if(s[i] == ch) count--;
			i++;	
		}
	}

	return ans;
}

int main() {
	int n, k;
	cin>>n>>k;

	string s;
	cin>>s;

	int ans = max(helper(s, n, 'a', k), helper(s, n, 'b', k));

	cout<<ans<<endl;
	return 0;
}