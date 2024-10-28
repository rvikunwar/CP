// Team.cpp
// https://codeforces.com/problemset/problem/401/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int, int> pii;
int mod = 1000000000 + 7;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n, m;
	cin>>n>>m;

	if(abs(n-m) == 1) {
		for(int i=0; i<(m+n); i++) {
			cout<<(i%2 == 0) ? '0': '1'; 
		}
		cout<<endl;
		return 0;
	}

	if(n > m && n-m >= 2){
		cout<<-1<<endl;
		return 0;
	}

	if(m > n && m-n >= 4){
		cout<<-1<<endl;
		return 0;
	}

	int i = 0;
	while(i < m+n) {
		if(odd) {
			cout<<'0';
			odd = !odd;
			i++;
		} else {
			cout<<"11";
			i+=2;
		}
	}

	cout<<endl;
	return 0;
}