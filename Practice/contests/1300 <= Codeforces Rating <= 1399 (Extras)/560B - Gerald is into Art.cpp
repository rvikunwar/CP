// Gerald is into Art.cpp
// https://codeforces.com/problemset/problem/560/B
#include<bits/stdc++.h>
using namespace std;

int main() {
	int w, h;
	cin>>w>>h;

	int w1, h1;
	cin>>w1>>h1;

	int w2, h2;
	cin>>w2>>h2;

	int is_feasible = 0;

	if((w1 + w2 <= w && max(h1, h2) <= h) ||
		(h1 + h2 <= h && max(w1, w2) <= w) ||
		(w1 + w2 <= h && max(h1, h2) <= w) ||
		(h1 + h2 <= w && max(w1, w2) <= h) ||
		(h1 + w2 <= w && max(w1, h2) <= h) ||
		(h1 + w2 <= h && max(w1, h2) <= w) ||
		(h2 + w1 <= w && max(w2, h1) <= h) ||
		(h2 + w1 <= h && max(w2, h1) <= w)) {
		is_feasible = 1;
	}

	cout<<(is_feasible ? "Yes": "No")<<endl;

	return 0;
}