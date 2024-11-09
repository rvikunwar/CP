// Cyclic.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n;
	cin>>n;

	int a=0, b=0, c=0;

	c = n%10;
	n /= 10;
	b = n%10;
	n /= 10;
	a = n%10;

	string ans1 = to_string(b) + to_string(c) + to_string(a);
	string ans2 = to_string(c) + to_string(a) + to_string(b);
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}