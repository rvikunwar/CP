// Fence.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n, k;
	cin>>n>>k;
	vector<int> vc(n, 0);


	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	int i=0, j=0;
	int height = 0;
	int min_height = INT_MAX;
	int ans;
	while(j<n) {
		if(j-i+1 == k) {
			height += vc[j];
			if(height < min_height) {
				min_height = height;
				ans = i;
			}
			j++;
			height -= vc[i];
			i++;
		} else {
			height += vc[j];
			j++;
		}
	}

	cout<<ans+1<<endl;

	return 0;
}