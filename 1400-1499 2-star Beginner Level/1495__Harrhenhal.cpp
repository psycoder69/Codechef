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

        int a = 0, b = 0, n = s.length(), palindrome = 1;

        for (int i = 0; i < n; i ++)
        {
            if (s[i] != s[n-1-i]) palindrome = 0;

            a += (s[i] == 'a');
            b += (s[i] == 'b');
        }

        cout << (palindrome ? (1) : (a > 0) + (b > 0)) << "\n";
    }

    return 0;
}