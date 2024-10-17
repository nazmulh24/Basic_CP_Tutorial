#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string r = s;
        if (s.size() == 1)
            cout << "NO" << endl;
        else
        {
            sort(r.begin(), r.end());
            if (r == s)
                sort(r.begin(), r.end(), greater<char>());
            if (s[0] == s[s.size() - 1])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << s << endl;
            }
        }
    }
    return 0;
}
