//--> LR-remainders
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, mal = 1;
        cin >> n >> m;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        string s;
        cin >> s;
        int b[n];
        for (int j = 0; j < n; j++)
        {
            int mal = 1;
            for (int i = 0; i < n; i++)
                mal = (mal * vec[i]);
            b[j] = mal % m;
            if (s[j] == 'L')
            {
                vec.erase(vec.begin());
            }
            else
            {
                vec.erase(vec.end() - 1);
            }
        }
        for (auto u : b)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
