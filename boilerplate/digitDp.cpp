// digitDp.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1000000000 + 7;

ll dp[101][2];
ll f(int index, int isSmaller, string &nums) {
    if(index == nums.size()) return 1;
    
    if(dp[index][isSmaller] != -1) {
        return dp[index][isSmaller];
    }
    ll res = 0;
    int ub = !isSmaller ? nums[index] - '0' : 9;

    for(int i=0; i<=ub; i++) {
        res = (res + f(index+1, isSmaller? isSmaller: i != ub, nums))%mod;
    }

    return dp[index][isSmaller] = res%mod;
}

int main() {
	string low;
	string high;
	cin>>high;
	cin>>low;
	
	cout<<high<<" "<<low<<endl;
    memset(dp, -1, sizeof(dp));
    ll h = f(0, false, high);
    h =  (mod + h)%mod;
    memset(dp, -1, sizeof(dp));
    ll l = f(0, false, low);
    l = (mod + l)%mod;
    cout<<(mod + h - l + 1)%mod<<endl;
    return 0;
}
