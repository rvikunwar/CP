#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
int powerOfPower(int a, int b){
    if(b == 0) return 1;
    long long value = powerOfPower(a, b/2);
    value = (value * value)%mod;
    if(b%2 == 1){
        value = (value*a)%mod;
    }
    return value;
}

int main() {

    int n;
    cin>>n;
    while(n--){
        int a, b, c;
        cin>>a>>b>>c;

        int value = powerOfPower(b, c);
        value = powerOfPower(a, value);

        cout<<value<<endl;
    }
    return 0; 	
}