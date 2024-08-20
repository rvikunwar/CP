// Ciel and Flowers.cpp

// Fox Ciel has some flowers: r red flowers, g green flowers and b blue flowers. She wants to use these flowers to make several bouquets. There are 4 types of bouquets:

// To make a "red bouquet", it needs 3 red flowers.
// To make a "green bouquet", it needs 3 green flowers.
// To make a "blue bouquet", it needs 3 blue flowers.
// To make a "mixing bouquet", it needs 1 red, 1 green and 1 blue flower.
// Help Fox Ciel to find the maximal number of bouquets she can make.


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int r, g, b;
	cin>>r>>g>>b;
	
	int mini =  min(r, min(g, b));
	ll ans = 0;
	for(int i=0; i<=min(2, mini); i++) {
		ll val = (r-i)/3 + (g-i)/3 + (b-i)/3 + i;
		ans = max(ans, val); 
	}
	cout<<ans<<endl;
	return 0;
}
