// Alice's Adventures in Permuting.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mod = 1000000000 + 7;
int row[] = {1, 0, -1, 0};
int col[] = {0, -1, 0, 1};

int main() {
	int t;
	cin>>t;

	while(t--) {
		ll n, b, c;
		cin>>n>>b>>c;

		if(b == 0) {
			if(c == n-2 || c == n-1) {
				cout<<n-1<<endl;
			} else if(c >= n) {
			    cout<<n<<endl;
			} else {
				cout<<-1<<endl;
			}
			continue;
		}

		ll ans = n;
		if(n > c) {
			ll mod = (n-c)%b;
			ll upper;
			if(mod == 0) {
			    upper = (n - c)/b;
			} else {
			    upper = (n - c)/b + 1;   
			}
			ans = n - upper;
		}

		cout<<ans<<endl;
	}

	return 0;
}