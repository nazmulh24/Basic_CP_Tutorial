//--> Cupboards
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int left_open = 0;
    int right_open = 0;
    for (int i = 0; i < n; ++i)
    {
        int li, ri;
        cin >> li >> ri;
        left_open += li;
        right_open += ri;
    }
    int t = min(left_open, n - left_open) + min(right_open, n - right_open);
    cout << t << endl;
    return 0;
}
