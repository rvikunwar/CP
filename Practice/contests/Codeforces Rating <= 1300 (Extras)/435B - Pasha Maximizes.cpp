// Pasha Maximizes.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	int k;
	cin>>s>>k;

	for(unsigned int i=0; i<s.size(); i++) {
		int val = s[i] - '0';
		int idx = -1;
		int maxi = val;
		for(unsigned int j=i+1; j<s.size(); j++) {
			int curr =  s[j] - '0';
			if(maxi < curr && j-i <= k) {
				maxi = curr;
				idx = j;
			}
		}

		if(idx != -1) {
			while(idx > i) {
				swap(s[idx-1], s[idx]);
				idx--;
				k--;
			}
		}
	}

	cout<<s<<endl;
	return 0 ;
}