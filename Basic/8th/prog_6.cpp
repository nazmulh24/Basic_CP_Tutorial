//-> Lexo Geek
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string w;
        cin >> w;
        if (next_permutation(w.begin(), w.end()))
            cout << w << endl;
        else
            cout << "no answer" << endl;
    }
    return 0;
}
