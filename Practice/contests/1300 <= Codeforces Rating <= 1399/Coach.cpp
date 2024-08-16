// Coach.cpp
#include<bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> g;
void dfs(int index, vector<int> &visited, vector<int> &ans) {
	if(visited[index]) {
		return;
	}

	visited[index] = 1;
	ans.push_back(index);

	for(auto it: g[index]) {
		if(!visited[it]) {
			dfs(it, visited, ans);
		}
	}
}

int main() {
	int n, m;
	cin>>n>>m;

	for(int i=0; i<m; i++) {
		int a, b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<int> visited(n+1, 0);
	int flag = 1;
	stack<int> st;
	vector<vector<int>> main_ans;
	for(int i=1; i<=n; i++) {
		if(g[i].size() == 0){
			st.push(i);
			visited[i] = 1;
		}
	}

	for(int i=1; i<=n; i++) {
		if(!visited[i]) {
			vector<int> ans;
			dfs(i, visited, ans);
			if(ans.size() > 3) {
				flag = 0;
				break;
			}

			if(ans.size() == 2) {
				if(st.empty()) {
					flag = 0;
					break;
				}
				ans.push_back(st.top());
				st.pop();
			} 
			main_ans.push_back(ans);
		}
	}

	if(flag == 0) {
		cout<<-1<<endl;
	} else {
		for(unsigned int i=0; i<main_ans.size(); i++) {
			for(auto it: main_ans[i]) {
				cout<<it<<" ";
			}
			cout<<endl;
		}

		while(!st.empty()) {
			int i = 0;
			while(i<3) {
				cout<<st.top()<<" ";
				st.pop();
				i++;
			}

			cout<<endl;
		}
	}

	return 0;
}