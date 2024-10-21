// Concatenation of Arrays.cpp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compare(const vector<int> &a, const vector<int> &b) {
	int maxA = max(a[0], a[1]);
	int maxB = max(b[0], b[1]);

	if(maxA == maxB) {
		int minA = min(a[0], a[1]);
		int minB = min(b[0], b[1]);
		return minA < minB;
	}
	return maxA < maxB;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<vector<int>> arr(n, vector<int> (2, 0));

		for(int i=0; i<n; i++) {
			cin>>arr[i][0]>>arr[i][1];
		}

		sort(arr.begin(), arr.end(), compare);

		for(int i=0; i<n; i++) {
			cout<<arr[i][0]<<" "<<arr[i][1]<<" ";
		}
		cout<<endl;
	}
	return 0;
}