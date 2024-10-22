// C++ Manacher's Algorithm.cpp
#include<bits/stdc++.h>
using namespace std;


vector<int> manacher(string s) {
	
	string t = "#";
	for(int i=0; i<s.size(); i++) {
		t += s[i];
		t += '#';
	}

	vector<int> p(t.size(), 0);
	int right = 0;
	int center = 0;
	int n = t.size();

	for(int i=0; i<t.size(); i++) {
		int mirror =  2*center - i;
		if(i < right) {
			p[i] = min(p[mirror], right - i);
		}

		while(i - (p[i] + 1) >= 0 && i + (p[i] + 1) < n && t[i-p[i]-1] == t[i+p[i]+1]) {
			p[i]++; 
		}

		if(i + p[i] >= right) {
			center = i;
			right = i + p[i];
		}
	}

	vector<int> ans;
	for(int i=0; i<t.size(); i++) {
		if(t[i] != '#') {
			ans.push_back(t[i]);
		}
	}

	return ans;
}

int main() {
	string s = "babbbaa";
	vector<int> vc = manacher(s);

	for(auto it: vc) {
		cout<<it<<" ";
	}
	return 0;
}