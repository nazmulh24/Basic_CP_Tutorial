#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, Sr;
    cin >> S;
    Sr =S;
    reverse(Sr.begin(), Sr.end());

    if (S == Sr)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
