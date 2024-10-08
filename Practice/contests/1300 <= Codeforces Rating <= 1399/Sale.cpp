// Sale


// Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

// Input
// The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

// Output
// Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most m TV sets.

// Examples
// inputCopy
// 5 3
// -6 0 35 -2 4
// outputCopy
// 8
// inputCopy
// 4 2
// 7 0 0 -7
// outputCopy
// 7


#include <bits/stdc++.h>
using namespace std;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

	int m, n;
	cin>>m>>n;
	vector<int> vc(m, 0);
	for(int i=0; i<m; i++){
		cin>>vc[i];
	}

	sort(vc.begin(), vc. end());

	int sum = 0;
	for(int i=0; i<n; i++){
		if(vc[i] < 0){
			sum += vc[i];
		} else {
			break;
		}
	}
	cout<<sum*-1<<endl;
	return 0;
}