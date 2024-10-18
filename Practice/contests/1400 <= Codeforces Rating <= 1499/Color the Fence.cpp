// Color the Fence.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
	int v;
	cin>>v;
	int min_digit;
	int mini_cost = 1e6;
	vector<int> c(10, 0);

	for(int i=1; i<=9; i++) {
		int value;
		cin>>value;
		c[i] = value;
		if(value <= mini_cost) {
			mini_cost = value;
			min_digit = i;
		}
	}

	if(mini_cost > v) {
		cout<<-1<<endl;
		return 0;
	}

	int L = v/mini_cost;

	vector<int> vc(L, min_digit);
	int surplus = v - L*mini_cost;
	for(int i=0; i<L; i++) {
		for(int j=9; j>=1; j--) {
			if(min_digit >= j) continue;
			int extra = c[j] - mini_cost;
			if(extra <= surplus) {
				surplus -= extra;
				vc[i] = j;
				break;
			}
		}
		if(surplus <= 0) break;
	}

	string s = "";
	for(auto it: vc) {
		s += to_string(it);
	}

	cout<<s<<endl;
	return 0;
}