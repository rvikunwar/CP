#include <bits/stdc++.h>
using namespace std;

int m = 998244353;

long long mod(long long a) {
    return (a%m + m)%m;
}

long long mul(long long a, long long b) {
    return mod(mod(a) * mod(b));
}

long long add(long long a, long long b) {
    return mod(mod(a) + mod(b));
}


int main() {
    int n;
    cin>>n;

    string s;

    cin>>s;
    char first = s[0];
    long long first_count = 0;
    char last = s[s.size()-1];
    long long last_count = 0;
    unsigned int i=0;
    while(i < s.size()) {
        if(first == s[i]) {
            first_count++;
        } else {
            break;
        }
        i++;
    }

    i=s.size()-1;
    while(i >= 0) {
        if(last == s[i]) {
            last_count++;
        } else {
            break;
        }
        i--;
    }

    long long ans = 0;
    if(first == last) {
        ans = mul(first_count, last_count);
    }

    ans = add(ans, first_count);
    ans = add(ans, last_count);
    ans = add(ans, 1);
    cout<<ans<<endl;
    return 0;
}