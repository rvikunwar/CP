// Another Problem on Strings.cpp
// https://codeforces.com/problemset/problem/165/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mod = 1000000000 + 7;

bool compare(int a, int b) {
	return a > b;
}

// int main() {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// 	int k;
// 	cin>>k;
	
// 	string s;
// 	cin>>s;

// 	int i = 0;
// 	int j = 0;
// 	int l = 0;

// 	int n = s.size();
// 	ll ans = 0;

// 	int ones = 0;
// 	int temp_left = 0;
// 	if(k == 0) {
// 		ll zeros = 0;
// 		while(j < n) {
// 			if(s[j] == '0') {
// 				zeros++;
// 			} else {
// 				ans += (zeros*(zeros+1)/2);
// 				zeros = 0;
// 			}
// 			j++;
// 		}
// 		ans += (zeros*(zeros+1)/2);
// 		cout<<ans<<endl;
// 		return 0;
// 	}

// 	while(j < n) {
// 		if(s[j] == '1') {
// 			ones++;
// 		}

// 		while(ones > k) {
// 			if(s[i] == '1') ones--;
// 			i++;
// 		}

// 		if(ones == k) {
// 			temp_left = i;
// 			while(temp_left <= j && s[temp_left] == '0') {
// 				temp_left++;
// 			}
// 			ans += temp_left - i + 1;
// 		}
// 		j++;
// 	}

// 	cout<<ans<<endl;

// 	return 0;
// }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int k;
	cin>>k;
	
	string s;
	cin>>s;
	ll ans = 0;
	map<int, int> mp;
	int n = s.size();

	int sum = 0;
	for(int i=0; i<n; i++) {
		if(s[i] == '1') {
			sum++;
		}

		if(sum == k) ans++;
		ans += mp[sum-k];
		mp[sum]++;
	}

	cout<<ans<<endl;

	return 0;
}