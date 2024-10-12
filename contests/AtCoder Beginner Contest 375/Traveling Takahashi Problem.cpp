// Traveling Takahashi Problem.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n = 0;
	cin>>n;

    cout << fixed << setprecision(10);
	long double x = 0;
	long double y = 0;
	long double ans = 0;
	for(int i=0; i<n; i++) {
		long double x1, y1;
		cin>>x1>>y1;

		long double dsq = pow((x - x1), 2) +  pow((y-y1), 2);
		long double d = sqrt(dsq);
		ans += d;
		x = x1;
		y = y1;
	}

	long double dsq = pow((0 - x), 2) +  pow((0 - y), 2);
	long double d = sqrt(dsq);
	ans += d;
	cout<<ans<<endl;

	return 0;
}