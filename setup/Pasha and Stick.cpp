#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;

    if(n%2 == 1) {
        cout<<0<<endl;
    } else {
        n = n/2;
        if(n%2 == 0) {
            n /= 2;
            n--;
        } else {
            n = n/2;
        }

        cout<<n<<endl;
    }

    return 0;
}