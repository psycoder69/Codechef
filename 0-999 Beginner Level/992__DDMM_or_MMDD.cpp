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

        int num1 = ((s[0] - '0') * 10 + (s[1] - '0'));
        int num2 = ((s[3] - '0') * 10 + (s[4] - '0'));

        if (num1 < 13 and num2 < 13) cout << "BOTH";
        else if (num2 < 13) cout << "DD/MM/YYYY";
        else cout << "MM/DD/YYYY";

        cout << "\n";
    }

    return 0;
}