#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    long long x;

    while (t --)
    {
        cin >> x;

        long long y = x;

        y <<= 3;
        y ++;

        y = (((long long) sqrt (y) - 1) >> 1);

        int a = ((y * (y + 1)) >> 1);
        int b = (a + y + 1);

        cout << (y + min (x - a, 1 + b - x)) << "\n";
    }

    return 0;
}