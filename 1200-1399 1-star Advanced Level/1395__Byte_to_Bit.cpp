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

    long long n;

    while (t --)
    {
        cin >> n;

        n --;

        long long num = (n / 26);
        int rem = (n % 26);

        long long people = pow(2, num);

        if (rem < 2) cout << (people) << " " << (0) << " " << (0);
        else if (rem < 10) cout << (0) << " " << (people) << " " << (0);
        else cout << (0) << " " << (0) << " " << (people);

        cout << "\n";
    }

    return 0;
}