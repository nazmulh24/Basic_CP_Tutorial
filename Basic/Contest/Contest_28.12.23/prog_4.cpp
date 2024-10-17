// Unnatural Language Processing
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char S[n+1];
        cin >> S;
        bool count[2 * 105] = {false};
        for (int i = 0; i < n - 1; ++i)
        {
            if ((S[i] == 'a' || S[i] == 'e') && (S[i + 1] == 'b' || S[i + 1] == 'c' || S[i + 1] == 'd'))
            {
                count[i] = true;
            }
            if ((S[i] == 'b' || S[i] == 'c' || S[i] == 'd') && (S[i + 1] == 'a' || S[i + 1] == 'e'))
            {
                count[i] = true;
            }
            for (int i = 0; i < n; ++i)
            {
                cout << S[i];
                if (count[i] && i < n - 1)
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
