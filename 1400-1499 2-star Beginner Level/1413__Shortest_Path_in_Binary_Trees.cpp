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

    int n, m;

    while (t --)
    {
        cin >> n >> m;

        int distance = 0;

        while (n != m)
        {
            if (n > m) n >>= 1; else m >>= 1;

            distance ++;
        }

        cout << (distance) << "\n";
    }

    return 0;
}