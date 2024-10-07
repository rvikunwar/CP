// dsu.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class DSU {
public:
	vector<int> parent;
	vector<int> rank;
	DSU(int n) {
		parent.resize(n);
		rank.resize(n, 0);
		for(int i=0; i<n; i++) {
			parent[i] = i;
		}
	}

	int find(int node) {
		if(parent[node] != node) {
			parent[node] = find(parent[node]); // path compression
		}
		return parent[node];
	}

	// union by rank
	void unionSet(int u, int v) {
		int rootu = find(u);
		int rootv = find(v);

		if(rootu != rootv) {
			if(rank[rootu] > rank[rootv]) {
				parent[rootv] = rootu;
			} else if(rank[rootu] < rank[rootv]){
				parent[rootu] = rootv;
			} else {
				parent[rootv] = rootu;
				rank[rootu]++;
			}
		} 
	}

	bool isConnected(int u, int v) {
		if(find(u) == find(v)) return true;
		return false;
	}
};

