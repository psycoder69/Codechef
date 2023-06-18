#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

pair <int, int> getFraction (pair <int, int> x, pair <int, int> y)
{
    while (x.second < y.second) x.first <<= 1, x.second <<= 1;

    return {x.first + y.first, x.second << 1};
}

void calculate (vector <pair <int, int>>& res)
{
    res[0].first = res[0].second = res[1].first = res[2].first = 1;

    res[1].second = 2;
    res[2].second = 4;

    for (int i = 3; i < res.size(); i ++)
    {
        res[i] = getFraction(res[i-2], res[i-1]);
    }
}

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    vector <pair <int, int>> res(26);

    calculate(res);

    while (t --)
    {
        cin >> n;

        cout << (res[n].first) << " " << (res[n].second) << " ";
    }

    return 0;
}