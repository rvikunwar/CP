
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll total, costA, costB, costC;
    
    while(cin >> total >> costA >> costB >> costC) {
        ll maxItems = 0;
        
        for(ll countA = 0; countA * costA <= total; ++countA) {
            for(ll countB = 0; countA * costA + countB * costB <= total; ++countB) {
                ll remaining = total - countA * costA - countB * costB;
                
                if(remaining % costC == 0) {
                    ll countC = remaining / costC;
                    maxItems = max(maxItems, countA + countB + countC);
                }
            }
        }
        
        cout<<maxItems<<endl;
    }
    
    return 0;
}