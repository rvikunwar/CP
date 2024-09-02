// Soldier and Cards.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int maxi = 10000000;
int main() { 
	int n;
	cin>>n;
	queue<int> a;
	queue<int> b;

	int an;
	cin>>an;
	for(int i=0; i<an; i++) {
		int val;
		cin>>val;
		a.push(val);
	}

	int bn;
	cin>>bn;
	for(int i=0; i<bn; i++) {
		int val;
		cin>>val;
		b.push(val);
	}

	int count = 0;
	int ans = 0;

	while(true) {
		int aa = a.front();
		int bb = b.front();
		a.pop();
		b.pop();
		if(aa > bb) {
			a.push(bb);
			a.push(aa);
		} else {
			b.push(aa);
			b.push(bb);
		}
		count++;
		if(a.empty()) {
			ans = 2;
			break;
		}

		if(b.empty()) {
			ans = 1;
			break;
		}

		if(count >= maxi){
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<count<<" "<<ans<<endl;
	return 0;
}
