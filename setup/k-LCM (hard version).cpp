#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        int k1 = (k - 3);

        int left = n - (k - 3);
        int x, y, z;

        if(left % 2 == 1) {
            x = left/2;
            y = left/2;
            z = 1;
        } else {
            if((left/2)%2 == 0) {
                x = left/4;
                y = left/4;
                z = left/2;
            } else {
                x = left/2 - 1;
                y = left/2 - 1;
                z = 2;
            }
        }

        for(int i=0; i<k1; i++) {
            cout<<1<<" ";
        }

        cout<<x<<" "<<y<<" "<<z<<endl;
    }

    return 0;
}

