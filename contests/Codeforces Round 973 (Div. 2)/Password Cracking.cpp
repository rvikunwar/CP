// Password Cracking.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		string s_ans = "";
		
		int go_right = 1;
		string first = "";
		int i = 1;
		while(i<=(2*n) || s_ans.size() == n) {
			if(s_ans.size() == n) {
				cout<<"! " + s_ans<<endl;
				break;
			}

			int ans;
			if(go_right) {
				string s_curr = s_ans + "0";
				cout<<"? " + s_curr<<endl;
				i++;
				cin>>ans;
				if(ans == 1) {
					s_ans = s_curr;
					if(first == "") {
						first = "1";
					} 
				} else {
					s_curr = s_ans + "1";
					cout<<"? " + s_curr<<endl;
					i++;
					cin>>ans;
					if(first == "") {
						first = "0";
					} 
					if(ans == 1) {
						s_ans = s_curr; 
					} else {
						go_right = 0;
					}
				}
			} else {
				if(first != "") {
					s_ans = first + s_ans;
					first = "";
					continue;
				}
				string s_curr = "0" + s_ans;
				cout<<"? " + s_curr<<endl;
				i++;
				cin>>ans;
				if(ans == 1) { 
					s_ans = s_curr; 
				} else {
					s_curr = "1" + s_ans;
					cout<<"? " + s_curr<<endl;
					i++;
					cin>>ans;
					s_ans = s_curr; 
				}
			}
		}

		cout.flush();
	}

	return 0;
}