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

        string s, res(10, '0');

        while (n --)
        {
            cin >> s;

            for (int i = 0; i < 10; i ++)
            {
                res[i] = ('0' + ((res[i] - '0') ^ (s[i] - '0')));
            }
        }

        cout << count (begin(res), end(res), '1') << "\n";
    }

    return 0;
}