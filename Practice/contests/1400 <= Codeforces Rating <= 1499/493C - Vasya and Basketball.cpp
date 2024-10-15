// Vasya and Basketball.cpp
// https://codeforces.com/problemset/problem/493/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef long double ld;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<pii> ab;
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++) {
    	int val;
    	cin>>val;
    	ab.push_back({val, 0});
    }

    int m;
    cin>>m;
    for(int i=0; i<m; i++) {
    	int val;
    	cin>>val;
    	ab.push_back({val, 1});
    }

    sort(ab.begin(), ab.end());
    int i=0, j=0;
    int aCount = 0;
    int bCount = 0;
    
    while(j < ab.size()) {
    	if(ab[j].second == 0) {
    		aCount++;
    	} else {
    		bCount++;
    	}
    	j++;
    	if(aCount < bCount) {
    		i = j;
    		aCount = 0;
    		bCount = 0;
    	}
    } 

    ll scoreA = 0;
    ll scoreB = 0;

    int k = 0;
    while(k < ab.size()) {
    	if(k < i) {
    		if(ab[k].second == 0) {
    			scoreA += 2;
    		} else {
    			scoreB += 2;
    		}
    	} else {
    		if(ab[k].second == 0) {
    			scoreA += 3;
    		} else {
    			scoreB += 3;
    		}
    	}
    	k++;
    }

    cout<<scoreA<<":"<<scoreB<<endl;

	return 0;
}