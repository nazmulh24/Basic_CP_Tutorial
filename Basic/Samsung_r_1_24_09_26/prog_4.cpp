/***********************************************************************

Name -->
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

using namespace std;

const int N = 1e9 + 9;

int count_valid_teams(const vector<int> &orcs)
{
    int sz = orcs.size();
    int count = 0;

    // Iterate over all possible subsets (1 to 2^N - 1)
    for (int mask = 1; mask < (1 << sz); ++mask)
    {
        long long total_energy = 0;
        int team_size = 0;

        // Calculate the sum of the selected subset
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            { // if the i-th Orc is included in the subset
                total_energy += orcs[i];
                team_size++;
            }
        }

        // Check if the sum is divisible by the size of the team
        if (total_energy % team_size == 0)
        {
            count++;
        }
    }

    return count;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> orcs;

    for (int i = 0; i < n; ++i)
        cin >> orcs[i];

    int valid_teams_count = count_valid_teams(orcs);

    cout << valid_teams_count % N << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    int n = 1;

    while (t--)
    {
        cout << "Case " << n << ": ";
        solve();
    }

    return 0;
}
