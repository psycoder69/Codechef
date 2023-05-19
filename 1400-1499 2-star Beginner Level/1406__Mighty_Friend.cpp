#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> k;

        int size = (n >> 1);

        vector <int> motu(size + (n & 1)), tomu(size);

        for (int i = 0; i < size; i ++) cin >> motu[i], cin >> tomu[i];

        if (n & 1) cin >> motu[size];

        sort (begin (motu), end (motu), greater <int> ());
        sort (begin (tomu), end (tomu));

        for (int i = 0; i < min (k, size) and motu[i] > tomu[i]; i ++)
        {
            swap (motu[i], tomu[i]);
        }

        int score1 = accumulate (begin (motu), end (motu), 0);
        int score2 = accumulate (begin (tomu), end (tomu), 0);

        cout << ((score2 > score1) ? "YES" : "NO") << "\n";
    }

    return 0;
}