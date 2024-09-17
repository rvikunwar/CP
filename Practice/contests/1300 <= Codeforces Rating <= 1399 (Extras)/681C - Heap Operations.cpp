// Heap Operations.cpp
// https://codeforces.com/problemset/problem/681/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, int> psi;

psi extract(string s) {
	string ss = "";
	int got_space = 0;
	string num = "";
	for(auto it: s) {
		if(got_space == ' '){
			got_space = 1;
			continue;
		}

		if(got_space == 1) {
			num += it;
		} else {
			ss += it;
		}
	}
	int num_ = stoi(num);
	return {ss, num_};
}

int main() {
	int n;
	cin>>n;
	vector<string> ans;
	priority_queue<int, vector<int>, greater<int>> pq;
	while(n--) {
		string operation;
		int value;
		cin>>operation;
		// psi p = extract_(s);

		// string operation =  p.first;
		// int value =  p.second;
		// cout<<operation<<" "<<value<<endl;
		if(operation == "insert") {
			cin>>value;
			string s_val = "insert " + to_string(value);
			ans.push_back(s_val);
			pq.push(value);
		} 
		else if(operation == "getMin") {
			cin>>value;
			if(pq.empty()) {
				pq.push(value);
				string s_val = "insert " + to_string(value);
				ans.push_back(s_val);
				s_val = "getMin " + to_string(value);
				ans.push_back(s_val);
			} else {
				if(pq.top() == value) {
					string s_val = "getMin " + to_string(value);
					ans.push_back(s_val);
				} else if(pq.top() > value) {
					pq.push(value);
					string s_val = "insert " + to_string(value);
					ans.push_back(s_val);
					s_val = "getMin " + to_string(value);
					ans.push_back(s_val);
				} else  {
					while(!pq.empty() && pq.top() < value) {
						string s_val = "removeMin";
						ans.push_back(s_val);
						pq.pop();
					}
					if(pq.top() == value) {
						string s_val = "getMin " + to_string(value);
						ans.push_back(s_val);
					} else {
						pq.push(value);
						string s_val = "insert " + to_string(value);
						ans.push_back(s_val);
						s_val = "getMin " + to_string(value);
						ans.push_back(s_val);
					}

				}
			}
		} else if(operation == "removeMin") {
			if(pq.empty()) { 
				string s_val = "insert " + to_string(0);
				ans.push_back(s_val);
				s_val = "removeMin";
				ans.push_back(s_val);
			} else {
				string s_val = "removeMin";
				ans.push_back(s_val);
				pq.pop();
			}
		}
	}

	cout<<ans.size()<<endl;
	for(auto &it: ans) {
		cout<<it<<endl;
	}

	return 0;
}