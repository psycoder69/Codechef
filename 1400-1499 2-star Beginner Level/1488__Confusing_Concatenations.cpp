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

        vector <int> x, y;

        int first = 1, num, maxx = INT_MIN;

        while (n --)
        {
            cin >> num;

            if (num > maxx) maxx = num, first = not first;

            if (first) x.push_back (num); else y.push_back (num);
        }

        if (x.empty() or y.empty()) cout << (-1);
        else
        {
            cout << (x.size()) << "\n";

            for (const int& num : x) cout << (num) << " ";

            cout << "\n" << (y.size()) << "\n";

            for (const int& num : y) cout << (num) << " ";
        }

        cout << "\n";
    }

    return 0;
}