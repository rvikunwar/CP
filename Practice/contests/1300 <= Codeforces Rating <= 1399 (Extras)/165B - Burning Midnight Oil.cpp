// Burning Midnight Oil.cpp
// https://codeforces.com/problemset/problem/165/B


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int maxi = 1000000000;


bool is_feasible(int v, int k, int n) {
	int lines = 0;
	int curr_v = v;
	int i = 0;
	while(lines < n && curr_v != 0) {
		curr_v = (v/(pow(k, i)));
		lines += curr_v;
		i++;
	} 

	return lines < n ? false: true;
}

int main() {
	int n, k;
	cin>>n>>k;

	int lo = 1;
	int hi = n;
	int ans = hi;
	while(lo <= hi) {
		int mid = lo + (hi-lo)/2;
		if(is_feasible(mid, k, n)) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout<<ans<<endl;

	return 0;
}