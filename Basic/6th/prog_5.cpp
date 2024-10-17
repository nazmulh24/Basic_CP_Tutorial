#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L, R;
    cin >> L >> R;
    string S;
    cin >> S;
    L--;
    R--;
    reverse(S.begin() + L, S.begin() + R + 1);
    cout << S << endl;
    return 0;
}
