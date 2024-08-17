// Ciel and Flowers.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int r, g, b;
	cin>>r>>g>>b;

	
	int flowers = 0;
	flowers += min(r, min(g, b));
	r = r - flowers;
	g = g - flowers;
	b = b - flowers;
	flowers += (r/3);
	flowers += (g/3);
	flowers += (b/3);
	
	cout<<flowers<<endl;
	return 0;
}