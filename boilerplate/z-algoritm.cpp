// z-algoritm.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


// string matching algorithm
vector<int> zMatch(string word) {
	int l = 0;
	int r = 0;
	int n = word.size();
	vector<int> z(n, 0);

	for(int i=0; i<n; i++) {
		if(i < r) {
			z[i] = z[i-l];

			if(i + z[i] > r) {
				z[i] = r - i;
			}
		}

		while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
		if(i + z[i] > r) {
			l = i;
			r = z[i] + i;
		}
	}

	return z;
}

