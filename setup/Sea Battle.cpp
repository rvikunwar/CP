// Sea Battle.cpp
// https://codeforces.com/problemset/problem/729/D

#include<bits/stdc++.h>
using namespace std;


int main() {

	int n, a, b, k;
	string s;
	cin>>n>>a>>b>>k;
	cin>>s;

	int i=0, j=0;
	int count = 0;
	int ship_position = 0;
	vector<int> ans;

	while(j<n) {
		if(s[j] == '0') {
			count++;
		} else {
			count = 0;
		}

		if(count == b) {
			ship_position++;
			count = 0;
			if(ship_position > a-1) {
				ans.push_back(j);
			}
		}
		j++;
	}

	ship_position += (count/b);

	int extra = ship_position - a;

	cout<<extra + 1<<endl;
	for(auto it: ans) {
		cout<<it+1<<" ";
	}
	return 0;
}