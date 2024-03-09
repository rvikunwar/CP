// Xenia and Divisors

#include<bits/stdc++.h>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector<int> vc(8, 0);
	int val;
	for(int i=0; i<n; i++){
		cin>>val;
		vc[val]++;
	}
	int groups = n/3;
	int fourWithTwo = vc[4];
	int sixWithThree = vc[3] > 0 ? vc[6] - (vc[2] > 0 ? vc[2] - fourWithTwo: 0): 0;
	int sixWithTwo = vc[6] > 0 ? vc[6] - sixWithThree: 0;

	if(vc[1] == groups && vc[2] == vc[4] + sixWithTwo && (vc[3] == sixWithThree) && vc[2] + vc[3] == groups && (vc[2] > 0 && sixWithTwo + fourWithTwo == vc[2])){
		for(int i=0; i<groups; i++){
			int count = 0;
			for(int i=1; i<7; i++){
				if(vc[i] && count<3){

					cout<<i<<" ";
					count++;
					vc[i]--;
					if(i%2 == 0){
						i+=1;
					}
				}
			}
			cout<<endl;
		}
	} else {
		cout<<-1;
	}



	return 0;
}