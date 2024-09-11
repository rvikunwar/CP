// Dima and Text Messages.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
	int n;
	cin>>n;

	string a = "<3";
	string s;
	for(int i=0; i<n; i++) {
		cin>>s;
		a += (s + "<3");
	}

	string main_str;
	cin>>main_str;

	int count = 0;
	unsigned int k = 0;
	unsigned int i = 0;
	while(i < a.size() && k < main_str.size()) {
		if(main_str[k] == a[i]) {
			k++;
			i++;
			count++;
		} else {
			k++;
		}
	}

	if(count == a.size()) {
		cout<<"yes"<<endl;
	} else {
		cout<<"no"<<endl;
	}
	return 0;
}