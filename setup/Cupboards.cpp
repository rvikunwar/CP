// Cupboards.cpp

#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int r=0;
	int l=0;
	for(int i=0;i<n;i++){
		int x=0,y=0;
		cin>>x>>y;
		if(x)++l;
		if(y)++r;
	}
	int offright=n-r;
	int offleft=n-l;
	int a=min(offright,r);
	int b=min(offleft,l);

	cout<<a+b<<endl;
	return 0;
}