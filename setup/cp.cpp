#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;

int modpower(int a, int b){
    if(b==0) {
        return 1;
    }
    long long value = modpower(a, b/2);
    value = (value * value)%mod;
    if(b%2 == 1){
        value = (value*a)%mod;
    }
    return value;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        cout<<modpower(a, b)<<endl;
    }
    return 0;
}