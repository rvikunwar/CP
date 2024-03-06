// Sum of divisor.cpp
// https://cses.fi/problemset/task/1082

// Let \sigma(n) denote the sum of divisors of an integer n. For example, \sigma(12)=1+2+3+4+6+12=28.
// Your task is to calculate the sum \sum_{i=1}^n \sigma(i) modulo 10^9+7.
// Input
// The only input line has an integer n.
// Output
// Print \sum_{i=1}^n \sigma(i) modulo 10^9+7.
// Constraints

// 1 \le n \le 10^{12}

// Example
// Input:
// 5

// Output:
// 21

#include <bits/stdc++.h>
using namespace std;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

	int t;
	cin>>t;
	int total = 0;
	while(t){
		int n = t;
		unordered_map<int, int> mp;
		for(int i=2; i*i<=n; i++){
			while(n%i == 0){
				n /= i;
				mp[i]++;
			}
		}

		if(n > 1){
			mp[n]++;
		}

		int sum = 1;
		for(auto it: mp){
			sum *= (pow(it.first, it.second+1) - 1)/(it.first-1);
		}
		total += sum;
		t--;
	}

	

	cout<<total<<endl;

	return 0;
}