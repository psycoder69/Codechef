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

        bool possible = 0;

        if (n == 1) possible = (m == 2);
        else if (m == 1) possible = (n == 2);
        else possible = (not (n & 1) or not (m & 1));

        cout << (possible ? "Yes\n" : "No\n");
    }

    return 0;
}