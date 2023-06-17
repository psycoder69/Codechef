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

    long long n, m;

    while (t --)
    {
        cin >> n >> m;

        long long total = (n * m);

        if ((n & 1) and (m & 1))
        {
            cout << (total >> 1) << "/" << (total) << "\n";
        }
        else cout << "1/2" << "\n";
    }

    return 0;
}