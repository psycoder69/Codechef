#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    while (t --)
    {
        cin >> n;

        int prev, curr;

        vector <bool> counter(n, 1);

        cin >> prev;

        for (int i = 1; i < n; i ++)
        {
            cin >> curr;

            if (prev != curr) counter[i-1] = counter[i] = 0;

            prev = curr;
        }

        cout << count (begin(counter), end(counter), 0) << "\n";
    }

    return 0;
}