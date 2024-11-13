// IQ Test.cpp

#include <iostream>
using namespace std;

int main() {
    int n, number, balance = 0, lastOddPos = 0, lastEvenPos = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> number;
        if (number % 2 == 0) {
            balance += 1;
            lastEvenPos = i;
        } else {
            balance -= 1;
            lastOddPos = i;
        }
    }

    cout << (balance > 0 ? lastOddPos : lastEvenPos) << endl;
    return 0;
}