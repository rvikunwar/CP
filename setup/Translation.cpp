// Translation.cpp

#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    string originalString, reversedString;
    cin>>originalString>>reversedString;

    reverse(reversedString.begin(), reversedString.end());

    if (originalString == reversedString) {
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    return 0;
}