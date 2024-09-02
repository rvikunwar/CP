// Woodcutters.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
	int n;
	cin>>n;

	vector<vector<ll>> arr(n);

	for(int i=0; i<n; i++) {
		ll a, b;
		cin>>a>>b;
		arr[i].push_back(a);
		arr[i].push_back(b);
	}

	ll last = arr[0][0];
	int i=1;
	int ans = 1;

	if(n == 1){
		cout<<ans<<endl;
		return 0;
	}

	while(i<n-1) {
		if(last < arr[i][0] - arr[i][1]) {
			last = arr[i][0];
			ans++;
		} else {
			if(i<n-1 && arr[i][0] + arr[i][1] < arr[i+1][0]) {
				last = arr[i][0] + arr[i][1];
				ans++;
			} else {
				last = arr[i][0];
			}
		}
		i++;
	}
	cout<<ans+1<<endl;
	return 0;
}