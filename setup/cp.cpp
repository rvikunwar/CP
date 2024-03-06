#include <bits/stdc++.h>
using namespace std;


int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
	// #endif

    int n;
    cin>>n;

    int sum = 0;
    int zeros = 0;
    int fives = 0;
    int stopFives = 0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;

        if(a == 5){
            sum+=5;
            fives++;
            if(sum % 9 == 0){
                stopFives += fives;
                fives = 0;
            }
        } else {
            zeros++;
        }
    }
    
    if(zeros > 0){
        zeros--;
        int ans = 0;
        while(stopFives--){
            ans = ans*10 + 5;
        }
        while(zeros--){
            ans = ans*10;
        }
        cout<<ans<<endl;
    } else {
        cout<<0<<endl;
    }

    return 0; 
}