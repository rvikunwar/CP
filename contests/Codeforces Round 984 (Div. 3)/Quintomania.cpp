// Quintomania.cpp

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
		for(int i=0; i<n; i++){
			cin>>vc[i];
		}

		int i = 1;
		int flag = 1;
		while(i<n) {
			if(abs(vc[i] - vc[i-1]) == 5 || abs(vc[i] - vc[i-1]) == 7) {
				i++;
				continue;
			} else {
				flag = 0;
				break;
			}
			i++;
		}

		if(flag) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}