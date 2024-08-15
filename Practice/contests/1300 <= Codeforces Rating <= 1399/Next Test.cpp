// Next Test.cpp

#include<bits/stdc++.h>
using namespace std;


int main() {

	int n;
	cin>>n;

	vector<int> vc(3001, 0);

	for(int i=0; i<n; i++){
		int val;
		cin>>val;
		vc[val] = 1;
	}

	int ans;
	for(int i=1; i<=n; i++){
		if(vc[i] == 0){
			ans = i;
			break;
		}
	}

	cout<<ans<<endl;

	return 0;
}