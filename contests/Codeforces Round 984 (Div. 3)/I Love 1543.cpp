// I Love 1543.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {

	int t;
	cin>>t;

	while(t--) {
		int n, m;
		cin>>n>>m;
		vector<string> s(n);
		for(int i=0; i<n; i++) {
			cin>>s[i];
		}

		int rs = 0;
		int cs = 0;
		int re = n-1;
		int ce = m-1;

		int l = min(m/2, n/2);
		vector<vector<int>> layers(l);
		int k = 0;
		while(rs <= re && cs <= ce) {
			for(int i=cs; i<=ce; i++) {
				layers[k].push_back(s[rs][i] - '0');
			}
			rs++;
			if(rs > re || cs > ce) break;

			for(int i=rs; i<=re; i++) {
				layers[k].push_back(s[i][ce] - '0');
			}
			ce--;
			if(rs > re || cs > ce) break;

			for(int i=ce; i>=cs; i--) {
				layers[k].push_back(s[re][i] - '0');
			}
			re--;
			if(rs > re || cs > ce) break;

			for(int i=re; i>=rs; i--) {
				layers[k].push_back(s[i][cs] - '0');
			}
			cs++;
			k++;
		}


		string str = "1543";
		int ans = 0;
		
		for(int i=0; i<l; i++) {
		    int size = layers[i].size();
		    for(int j=0; j<size; j++) {
		        int match = 1;
		        for(int k=0; k<4; k++) {
		            if((str[k] - '0') == layers[i][(j+k) %size]) {
		                continue;
		            } else {
		                match = 0;
		            }
		        }
		        if(match) {
		            ans++;
		        }
		    }
		}
		
		cout<<ans<<endl;
	}
	
	return 0;
}