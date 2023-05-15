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

        int min_count = count(begin(s), end(s), 'a');

        min_count = min (min_count, (int)(s.length()) - min_count);

        cout << (min_count) << "\n";
    }

    return 0;
}