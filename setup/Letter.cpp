// Letter.cpp

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll i;
    bool is_possible = true;
    map<char, int> char_count;
    string input1, input2;

    getline(cin, input1);
    getline(cin, input2);

    for (i = 0; i < input1.length(); i++) {
        char_count[input1[i]]++;
    }

    for (i = 0; i < input2.length(); i++) {
        if (char_count[input2[i]] > 0 || input2[i] == ' ') {
            char_count[input2[i]]--;
        } else {
            is_possible = false;
            break;
        }
    }

    if (is_possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}