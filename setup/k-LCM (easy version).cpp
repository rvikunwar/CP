// k-LCM (easy version)
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        int x, y, z;

        if(n%2 == 1) {
            x = 1;
            y = (n-1)/2;
            z = (n-1)/2;
        } else {
            if( (n/2)%2 == 0 ){
                x = n/2;
                y = x/2;
                z = y;
            } else {
                x = (n-2)/2;
                y = (n-2)/2;
                z = 2;
            }

        }

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}