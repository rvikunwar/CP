// Appleman and Card Game.cpp

#include<bits/stdc++.h>
using namespace std;
#define ll long long


#define N 100006
ll a[N];
int main()
{
    ll n, k, d;

    ll cnt=0,ans=0;
   	cin>>n;
    cin>>k;
    char s;
    for(int i=0; i<n; i++){
        cin>>s;
        a[s-'A']++;
    }

    sort(a, a+26);
    for(int i=25;i>=0;i--)
    {
        d = min(a[i], k);
        ans += d*d;
        k -= d;
    }

    cout<<ans<<endl;
    return 0;
}