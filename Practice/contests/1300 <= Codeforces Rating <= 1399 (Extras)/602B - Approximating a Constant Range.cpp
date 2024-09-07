// Approximating a Constant Range.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


// int main() {
// 	int n;
// 	cin>>n;

// 	vector<int> vc(n, 0);
// 	for(int i=0; i<n; i++) {
// 		cin>>vc[i];
// 	}

// 	multiset<int> mt;
// 	int j = 0;
// 	int i = 0;
// 	int ans = 0;
// 	while(i<n) {
// 		mt.insert(vc[i]);
// 		int mx = *mt.rbegin();
// 		int mn = *mt.begin();

// 		int diff = mx - mn;

// 		while(diff > 1) {
// 			mt.erase(mt.find(vc[j]));
// 			mx = *mt.rbegin();
// 			mn = *mt.begin();
// 			diff = mx - mn;
// 			j++;
// 		} 
// 		ans = max(ans, i-j+1);
// 		i++;
// 	}

// 	cout<<ans<<endl;

// 	return 0;
// }


int main() {
	int n;
	cin>>n;

	vector<int> vc(n, 0);
	for(int i=0; i<n; i++) {
		cin>>vc[i];
	}

	vector<int> steps(n, 0);

	for(int i=1; i<n; i++) {
		steps[i] = vc[i] + vc[i-1];
	}

	int i = 1; 
	int j = 1;

	int last = 0;
	int lastIndex = 0;
	int ans = 0;
	while(j<n) {
		if(steps[j] == last && last != 0 && i < j) {
			i++;
		} else {
			ans = max(j-i+1, ans);
			if(steps[j] != 0) {
				last = steps[j];
				lastIndex = j;
			}
			j++;
		}
	}

	cout<<ans+1<<endl;

	return 0;
}