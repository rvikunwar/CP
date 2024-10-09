// Adjust The Presentation (Hard Version).cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


void update(int i, int &w, vector<set<int>> &first, vector<int> &val, vector<int> &arr, int n) {
	if(i > 0) {
		w -= (val[i-1] > val[i]); 
	}

	if(i < n-1) {
		w -= (val[i] > val[i+1]);
	}

	val[i] = *first[arr[i]].begin();

	if(i > 0) {
		w += (val[i-1] > val[i]); 
	}

	if(i < n-1) {
		w += (val[i] > val[i+1]);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, m ,q;

		cin>>n>>m>>q;

		vector<int> arr(n, 0);
		vector<int> pos(n);
		for(int i=0; i<n; i++) {
			cin>>arr[i];
			arr[i]--;
			pos[arr[i]] = i;
		}

		vector<set<int>> first(n);
		vector<int> val(n, 0);
		vector<int> brr(m, 0);
		for(int i=0; i<m; i++) {
			cin>>brr[i];
			brr[i]--;
			first[brr[i]].insert(i);
		}

		for(int i=0; i<n; i++) {
			first[i].insert(m);
		}

		for(int i=0; i<n; i++) {
			val[i] = *first[arr[i]].begin();
		}

		int w = 0;
		for(int i=1; i<n; i++) {
			if(val[i-1] > val[i]) {
				w++;
			}
		}

		if(w == 0) {
			cout<<"YA"<<endl;
		} else {
			cout<<"TIDAK"<<endl;
		}

		while(q--) {
			int u, v;
			cin>>u>>v;
			u--;
			v--;

			int old = brr[u];
			first[old].erase(u);
			brr[u] = v;
			first[v].insert(u);
			update(pos[old], w, first, val, arr, n);
			update(pos[v], w, first, val, arr, n);

			if(w == 0) {
				cout<<"YA"<<endl;
			} else {
				cout<<"TIDAK"<<endl;
			}
		}
	}

	return 0;
}