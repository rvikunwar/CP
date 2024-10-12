// Seats.cpp


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	string s; 
	int n;

	cin>>n>>s;

	int i = 1;
	int ans = 0;
	while(i <= (n-2)) {
		if(s[i-1] == '#' && s[i+1] == '#' && s[i] == '.') {
			ans++;
		}
		i++;
	}

	cout<<ans<<endl;
	return 0;
}