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
    char c;

    while (t --)
    {
        cin >> n;
        cin >> s >> c;

        long long curr = 1, res = 0;

        for (int i = 0; i < n; i ++)
        {
            if (s[i] == c)
            {
                res += (curr * (n - i));
                curr = 1;
            }
            else curr ++;
        }

        cout << (res) << "\n";
    }

    return 0;
}