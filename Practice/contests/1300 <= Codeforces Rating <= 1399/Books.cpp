// Books.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, t;
	cin>>n>>t;
	vector<int> vc(n, 0);
	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	int i=0, j=0;
	int ans = 0;
	ll sum = 0;
	while(j<n) {
		ll temp_sum = sum + vc[j];
		if(temp_sum > t) {
			sum -= vc[i];
			i++;
		} else {
			int current_size = (j-i+1);
			sum += vc[j];
			ans = max(ans, current_size);
			j++;
		}

		if(i > j) {
			j = i;
			sum = max((ll)0, sum);
		}
	}

	cout<<ans<<endl;

	return 0;
}