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

    string x, y;

    while (t --)
    {
        cin >> n;
        cin >> x;
        cin >> y;

        vector <int> prize(n+1);

        for (int& money : prize) cin >> money;

        int correct = 0, incorrect = 0;

        for (int i = 0; i < n; i ++)
        {
            if (x[i] == y[i]) correct ++; else incorrect ++;
        }

        int amount = 0;

        if (not incorrect) amount = prize[n];
        else if (incorrect == n) amount = prize[0];
        else amount = *max_element (begin (prize), begin (prize) + correct + 1);

        cout << (amount) << "\n";
    }

    return 0;
}