#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int get_balance(string& s)
{
    int curr = 0, maxx = 0;

    for (char& c : s) curr += (c == '(' ? (1) : (-1)), maxx = max(curr, maxx);

    return maxx;
}

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

        int balance = get_balance(s);

        for (int i = 0; i < balance; i ++) cout << '(';
        for (int i = 0; i < balance; i ++) cout << ')';

        cout << "\n";
    }

    return 0;
}