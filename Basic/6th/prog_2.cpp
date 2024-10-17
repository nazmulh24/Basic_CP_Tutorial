#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int d_sum = 0;
    for (char digit : S)
    {
        d_sum += digit - '0';
    }
    cout << d_sum << endl;
    return 0;
}
