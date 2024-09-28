// A - September.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int ans  = 0;

	for(int i=0; i<12; i++) {
		string str;
		cin>>str;

		if(str.size() == (i+1)) {
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}