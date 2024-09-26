// Wasted Time.cpp
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int n, k;
    cin >> n >> k;

    double x1, y1, x0, y0, total(0.0);
    cin >> x0 >> y0;
    while (--n)
    {
        cin>>x1>> y1;
        total += sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
        x0 = x1;
        y0 = y1;
    }
    cout << fixed << setprecision(6) << total * k / 50 << endl;
    return 0;
}