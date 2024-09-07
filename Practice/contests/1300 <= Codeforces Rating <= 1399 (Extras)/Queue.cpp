// Queue.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
	int n;
	cin>>n;
	vector<ll> vc(n, 0);
	for(int i=0; i<n; i++){
		cin>>vc[i];
	}

	sort(vc.begin(), vc.end());

	ll time = 0;
	int ans  = 0;
	for(int i=0; i<n; i++) {
		if(time <= vc[i]) {
			ans++;
			time += vc[i];
		} 
	}

	cout<<ans<<endl;
	return 0;
}