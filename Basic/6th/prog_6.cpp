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
        int count = 0;
        for (int i = 0; i < l - 2; i++)
        {
            if ((S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0') || (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1'))
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}
