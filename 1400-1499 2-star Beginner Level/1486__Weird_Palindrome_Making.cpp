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

        int num, odd = 0;

        while (n --)
        {
            cin >> num;

            odd += (num & 1);
        }

        odd -= (odd & 1);

        cout << (odd >> 1) << "\n";
    }

    return 0;
}