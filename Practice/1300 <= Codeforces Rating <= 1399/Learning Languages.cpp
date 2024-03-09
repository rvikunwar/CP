// Learning Languages.cpp


// The "BerCorp" company has got n employees. These employees can use m approved official languages for the formal correspondence. The languages are numbered with integers from 1 to m. For each employee we have the list of languages, which he knows. This list could be empty, i. e. an employee may know no official languages. But the employees are willing to learn any number of official languages, as long as the company pays their lessons. A study course in one language for one employee costs 1 berdollar.

// Find the minimum sum of money the company needs to spend so as any employee could correspond to any other one (their correspondence can be indirect, i. e. other employees can help out translating).

// Input
// The first line contains two integers n and m (2 ≤ n, m ≤ 100) — the number of employees and the number of languages.

// Then n lines follow — each employee's language list. At the beginning of the i-th line is integer ki (0 ≤ ki ≤ m) — the number of languages the i-th employee knows. Next, the i-th line contains ki integers — aij (1 ≤ aij ≤ m) — the identifiers of languages the i-th employee knows. It is guaranteed that all the identifiers in one list are distinct. Note that an employee may know zero languages.

// The numbers in the lines are separated by single spaces.

// Output
// Print a single integer — the minimum amount of money to pay so that in the end every employee could write a letter to every other one (other employees can help out translating).

// Examples
// inputCopy
// 5 5
// 1 2
// 2 2 3
// 2 3 4
// 2 4 5
// 1 5
// outputCopy
// 0
// inputCopy
// 8 7
// 0
// 3 1 2 3
// 1 1
// 2 5 4
// 2 6 7
// 1 3
// 2 7 4
// 1 1
// outputCopy
// 2
// inputCopy
// 2 2
// 1 2
// 0
// outputCopy
// 1
// Note
// In the second sample the employee 1 can learn language 2, and employee 8 can learn language 4.

// In the third sample employee 2 must learn language 2.

#include<bits/stdc++.h>
using namespace std;

class DSU{

	public:
		vector<int> parent;
		vector<int> rank;
	
		DSU(int n) {
			parent.push_back(0);
			rank.push_back(0);
			for(int i=1; i<=n; i++){
				parent.push_back(i);
				rank.push_back(0);
			}
		}

		int Find(int x) {
			return parent[x] = parent[x] == x ? x: Find(parent[x]);
		}

		void Union(int u, int v){
			int a = Find(u);
			int b = Find(v);
			if(a == b){
				return;
			}

			if(rank[a] < rank[b]){
				parent[a] = b;
			} else {
				parent[b] = a;
				if(rank[b] == rank[a]){
					rank[b]++;
				}
			}
		}
};

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

	int n, m;
	cin>>n>>m;
	DSU dsu = DSU(m);

	unordered_map<int, int> mp;
	int no_lang = 0;
	for(int i=0; i<n; i++){
		int k;
		int l;
		cin>>l;

		if(l==0){
			no_lang++;
			continue; 
		}
		cin>>k;
		mp[k]++;
		int val;
		for(int j=1; j<l; j++){
			cin>>val;
			mp[val]++;
			dsu.Union(k, val);
		}
	}

	int ans = 0;
	int count = 0;
	for(int i=1; i<=m; i++){
		if(mp[i] == 0){
			count++;
			continue;
		}
		if(dsu.parent[i] == i){
			ans++;
		}
	}

	ans--;
	if(count == m){
		cout<<n<<endl;
	} else {
		cout<<ans+no_lang<<endl;
	}

	return 0;
}