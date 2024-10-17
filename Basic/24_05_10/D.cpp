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
        int cnt = 0;
        int l = s.length();
        for (int i = 0; i < s.length() - 1; ++i)
            if (s[i] == '1' && s[i + 1] == '0')
                cnt++;
        cout << cnt + 1 << endl;
    }
    return 0;
}
