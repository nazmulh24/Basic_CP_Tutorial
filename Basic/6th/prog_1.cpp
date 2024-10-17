#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int l = S.size();
        if (l <= 10)
            cout << S << endl;
        else
            cout << S[0] << l - 2 << S[l - 1] << endl;
    }
    return 0;
}
