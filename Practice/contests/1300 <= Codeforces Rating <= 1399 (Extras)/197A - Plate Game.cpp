// Plate Game.cpp
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
	int a, b, r;
	cin>>a>>b>>r;

	if(a < 2*r || b < 2*r) {
		cout<<"Second"<<endl;
		return 0;
	}

	cout<<"First"<<endl;

	return 0;
}