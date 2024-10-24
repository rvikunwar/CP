// Kousuke's Assignment.cpp
// Sakurako and Kosuke.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		vector<int> vc(n, 0);

		for(int i=0; i<n; i++) {
			cin>>vc[i];
		}

		unordered_set<int> prefix;
		int sum = 0;
		int ans = 0;
		prefix.insert(0);

		for(int i=0; i<n; i++) {
			sum += vc[i];

			if(prefix.find(sum) != prefix.end()) {
				ans++;
				sum = 0;
				prefix.clear();
				prefix.insert(0);
			} else {
				prefix.insert(sum);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}