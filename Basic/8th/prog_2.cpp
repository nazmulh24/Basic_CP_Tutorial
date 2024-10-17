//-> String Task
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, sc;
        cin >> str;
        sc = str;
        reverse(sc.begin(), sc.end());
        if (str == sc)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
