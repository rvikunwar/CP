// A. Sakurako's Exam.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int a, b;
		cin>>a>>b;

		if(a % 2 != 0){
			cout<<"NO"<<endl;
		} else {

			if(b%2 == 0) {
				cout<<"YES"<<endl;
			} else {
				if(2 <= a) {
					cout<<"YES"<<endl;
				} else {
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}