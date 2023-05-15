#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

bool is_vowel(char& c)
{
    return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u');
}

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    string s;

    while (t --)
    {
        cin >> n;
        cin >> s;

        int consonant = 0;

        for (char& c : s)
        {
            if (is_vowel(c)) consonant = 0; else consonant ++;

            if (consonant == 4)
            {
                consonant = -1;
                break;
            }
        }

        cout << (consonant >= 0 ? "YES" : "NO") << "\n";
    }

    return 0;
}