// Alice's Adventures in Chess.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mod = 1000000000 + 7;
int row[] = {1, 0, -1, 0};
int col[] = {0, -1, 0, 1};

int main() {
	
	int t;
	cin>>t;


	while(t--) {
		int n, a, b;
		cin>>n>>a>>b;

		string s;
		cin>>s;

		int size = s.size();
		int flag = 0;
		int row = 0;
		int col = 0;
		int round_ = 0;
		while(round_ < 15) {
		    
			for(int i=0; i<size; i++) {
				if(s[i] == 'N') {
					row = row + 1;
					col = col + 0;
				}
				else if(s[i] == 'S') {
					row = row - 1;
					col = col + 0;
				}
				else if(s[i] == 'E') {
					row = row + 0;
					col = col + 1;
				}
				else if(s[i] == 'W') {
					row = row + 0;
					col = col - 1;
				}
                // cout<<row<<" "<<col<<" "<<a<<" "<<b<<endl;
				if(row == b && col == a) {
					flag = 1;
					break;
				}
			}
			round_++;
			if(flag) {
			    break;
			}
		}

		if(flag) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}