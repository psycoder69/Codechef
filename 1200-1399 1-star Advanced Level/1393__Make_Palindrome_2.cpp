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

    string s;

    while (t --)
    {
        cin >> n;
        cin >> s;

        int zeros = count (begin (s), end (s), '0'), ones = (n - zeros);

        cout << ((zeros > ones) ? string (zeros, '0') : string (ones, '1')) << "\n"; 
    }

    return 0;
}