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

    string s;

    while (t --)
    {
        cin >> s;

        int zero = 0, one = 0;

        for (char& c : s)
        {
            (c == '0' ? (zero = zero + 1) : (one = one + 1));
        }

        cout << ((zero == 1 or one == 1) ? "Yes" : "No") << "\n";
    }

    return 0;
}