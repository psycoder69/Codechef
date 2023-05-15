#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    vector <int> digit = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int t, a, b;
    cin >> t;

    while (t --)
    {
        cin >> a >> b;

        int sum = (a + b), matches = 0;

        while (sum)
        {
            matches += digit[sum % 10];
            sum /= 10;
        }

        cout << (matches) << "\n";
    }

    return 0;
}