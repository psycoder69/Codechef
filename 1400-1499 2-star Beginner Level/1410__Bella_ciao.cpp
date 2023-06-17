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

    long long d1, d2, p, q;

    while (t --)
    {
        cin >> d1 >> d2 >> p >> q;

        long long sum = (d1 * p), term = (d1 / d2);

        sum += ((d2 * term * (term - 1) * q) >> 1) + ((d1 % d2) * q * term);

        cout << (sum) << "\n";
    }

    return 0;
}