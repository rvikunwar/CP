// laptops.cpp


// One day Dima and Alex had an argument about the price and quality of laptops. Dima thinks that the more expensive a laptop is, the better it is. Alex disagrees. Alex thinks that there are two laptops, such that the price of the first laptop is less (strictly smaller) than the price of the second laptop but the quality of the first laptop is higher (strictly greater) than the quality of the second laptop.

// Please, check the guess of Alex. You are given descriptions of n laptops. Determine whether two described above laptops exist.

// Input
// The first line contains an integer n (1 ≤ n ≤ 105) — the number of laptops.

// Next n lines contain two integers each, ai and bi (1 ≤ ai, bi ≤ n), where ai is the price of the i-th laptop, and bi is the number that represents the quality of the i-th laptop (the larger the number is, the higher is the quality).

// All ai are distinct. All bi are distinct.

// Output
// If Alex is correct, print "Happy Alex", otherwise print "Poor Alex" (without the quotes).

// inputCopy
// 2
// 1 2
// 2 1
// outputCopy
// Happy Alex

#include<bits/stdc++.h>
using namespace std;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif
	int n;
	cin>>n;
	vector<pair<int, int>> vc;

	for(int i=0; i<n; i++){
		int a, b;
		cin>>a>>b;
		pair<int, int> pr = {a, b};
		vc.push_back(pr);
	}

	sort(vc.begin(), vc.end());
	int maxi = 0;
	int flag = 1;
	for(int i=0; i<vc.size(); i++){
		if(maxi > vc[i].second){
			maxi = vc[i].second;
			cout<<"Happy Alex"<<endl;
			flag = 0;
			break;
		}
		maxi = vc[i].second;
	}
	if(flag) {
		cout<<"Poor Alex"<<endl;
	}
	
	return 0;
}