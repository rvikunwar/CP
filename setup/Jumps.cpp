// Jumps.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int x;
		cin>>x;

		int a = 1;
		int b = 1;
		int c = -2*x;
		double d = b*b - 4*a*c;
		double sqrt_v = sqrt(abs(d));

		double n = (-1 * b + sqrt_v)/(2*a);

		n = ceil(n);

		int left = n*(n+1)/2 - x;
		if(left != 0) {
			cout<<n<<endl;
		} else {
			cout<<n+1<<endl;
		}
	}
	return 0;
}