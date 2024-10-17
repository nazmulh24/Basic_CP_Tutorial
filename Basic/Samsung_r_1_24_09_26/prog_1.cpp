/***********************************************************************

Name --> Gain with Pain
Link -->

***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    int n;
    cin >> n;

    int x, y, z;
    bool flag = true;
    while (n--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> x >> y >> z;
            if ((i == 0 || i == 1 || i == 2) && x == 2 && y == 3 && z == 10)
                continue;
            else if (i == 3 && x == 1 && y == 3 && z == 10)
                continue;
            else if (i == 4 && x == 3 && y == 3 && z == 10)
                continue;
            else
                flag = false;
        }
    }
    if (flag)
        cout << "Consistent" << endl;
    else
        cout << "Inconsistent" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Read number of test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
