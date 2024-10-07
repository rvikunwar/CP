// Cthulhu.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


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

	int find(int u) {
		if(parent[u] != u) {
			parent[u] = find(parent[u]);
		}
		return parent[u];
	}

	void unionSet(int u, int v) {
		int rootU = find(u);
 		int rootV = find(v);

 		if(rootU != rootV) {
 			if(rank[rootU] > rank[rootV]) {
 				parent[rootV] = rootU;
 			} else if(rank[rootU] < rank[rootV]) {
 				parent[rootU] = rootV;
 			} else {
 				parent[rootV] = rootU;
 				rank[rootU]++;
 			}
 		}
	}
};

int main() {
	int n, m;
	cin>>n>>m;

	DSU dsu(n+1);
	int is_monster = 0;
	for(int i=0; i<m; i++) {
		int u, v;
		cin>>u>>v;
		dsu.unionSet(u, v);
	}

	int root = dsu.find(1);
	for(int i=2; i<=n; i++) {
		if(root != dsu.find(i)) {
			cout<<"NO"<<endl;
			return 0;
		}
	}

	if(m == n) {
		cout<<"FHTAGN!"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

	return 0;
}

