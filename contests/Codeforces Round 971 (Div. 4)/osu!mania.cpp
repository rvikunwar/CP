// osu!mania.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		vector<string> vc(n, "....");

		for(int i=0; i<n; i++) {
			for(int j=0; j<4; j++) {
				cin>>vc[i][j];
			}
		}

		vector<int> ans;


		for(int i=n-1; i>=0; i--) {
			for(int j=0; j<4; j++) {
				if(vc[i][j] == '#') {
					ans.push_back(j+1);
				}
			}
		}

		for(auto it: ans) {
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}