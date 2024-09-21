// Count ABC Again.cpp

#include<bits/stdc++.h>
using namespace std;

int helper(int index, int size, string s) {

	if(s[index] == 'A' && index + 2 < size) {
		string comp_s = s.substr(index, 3);
		if(comp_s == "ABC") {
			return 1;
		}
	}

	else if(s[index] == 'B' && index-1 >= 0 && index+1 < size) {
		string comp_s = s.substr(index-1, 3);
		if(comp_s == "ABC") {
			return 1;
		}
	}

	else if(s[index] == 'C' && index-2 >= 0 && index < size) {
		string comp_s = s.substr(index-2, 3);
		if(comp_s == "ABC") {
			return 1;
		}
	}

	return 0;
}

int main() {
	int n, q;
	cin>>n>>q;
	string s;
	cin>>s;

	int size = s.size();
	cout<<s<<endl;
	string sub = "ABC";
	int count = 0;
	for(int i=0; i<size-2; i++) {
		string comp_s = s.substr(i, 3);
		if(comp_s == sub) {
			count++;
		}
	}

	for(int i=0; i<q; i++) {
		int pos;
		char ch;
		cin>>pos>>ch;

		if(helper(pos-1, size, s)) {
			count--;
		}
		s[pos-1] = ch;
		if(helper(pos-1, size, s)) {
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}