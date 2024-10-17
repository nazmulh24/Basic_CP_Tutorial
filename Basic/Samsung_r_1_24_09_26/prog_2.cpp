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

int countOneBits(int num)
{
    return bitset<32>(num).count();
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        vector<int> candidates;

        for (char replacement = '0'; replacement <= '9'; ++replacement)
        {
            string modified = s;
            for (char &ch : modified)
            {
                if (ch == '7')
                {
                    ch = replacement;
                }
            }

            int candidate = stoi(modified);
            if (candidate > 0 && modified[0] != '0')
            {
                candidates.push_back(candidate);
            }
        }

        sort(candidates.begin(), candidates.end(), [](int a, int b)
             {
            int bitsA = countOneBits(a);
            int bitsB = countOneBits(b);
            if (bitsA != bitsB) {
                return bitsA > bitsB;
            } else {
                return a > b;
            } });

        cout << candidates[0] << endl;
    }

    return 0;
}