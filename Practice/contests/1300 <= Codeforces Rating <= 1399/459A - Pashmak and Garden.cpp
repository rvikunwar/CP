// Pashmak and Garden.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;

	int x3, y3, x4, y4;
	int flag = 1;
	if(x1 == x2 || y1 == y2) {
		int side;
		if(x1 == x2) {
			side = abs(y1 - y2);
			x3 = x4 = x2 + side;
			y3 = y1;
			y4 = y2; 
		} else {
			side = abs(x1 - x2);
			y3 = y4 = y2 + side;
			x3 = x1;
			x4 = x2; 
		}
	} else {
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;

		if(abs(y2 - y1) != abs(x2 - x1)) {
			flag = 0;
		}
	}

	if(flag) {
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
	} else {
		cout<<-1<<endl;
	}
	return 0;
}