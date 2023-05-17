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

        int flag = 1, len = s.length();

        if (len & 1)
        {
            for (int i = 0; i < len; i ++)
            {
                if (s[i] != s[0])
                {
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < len-1; i ++)
            {
                if ((s[i] != s[0]) or (s[i+1] != s[1]))
                {
                    flag = 0;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}