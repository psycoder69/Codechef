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

        string temp;
        stack <string> st;

        for (char& c : s)
        {
            if (c == '(') continue;

            if (c == ')')
            {
                temp = st.top();
                st.pop();

                temp += st.top();
                st.pop();

                temp = (st.top() + temp);
                st.pop();

                st.push(temp);
            }
            else
            {
                temp = c;
                st.push(temp);
            }
        }

        cout << (st.top()) << "\n";
    }

    return 0;
}