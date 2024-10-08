// Apartments.cpp
// https://cses.fi/problemset/task/1084/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
	int n, m, k;
	cin>>n>>m>>k;

	vector<int> applicants(n, 0);
	for(int i=0; i<n; i++) {
		cin>>applicants[i];
	}

	vector<int> app(m, 0);
	for(int i=0; i<m; i++) {
		cin>>app[i];
	}

	sort(app.begin(), app.end());
	sort(applicants.begin(), applicants.end());

	int ans = 0;
	int i = 0;
	int j = 0;
	while(i < m && j < n) {
		if(app[i] >= applicants[j] - k && app[i] <= applicants[j] + k) {
			ans++;
			i++;
			j++;
		} else {
		    if(app[i] < applicants[j]) {
		        i++;
		    } else {
		        j++;
		    }
		}
	}

	cout<<ans<<endl;

	return 0;
}