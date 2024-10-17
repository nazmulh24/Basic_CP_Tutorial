//--> osu!mania

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> col(n);

        for (int i = 0; i < n; i++)
        {
            string row;
            cin >> row;

            for (int j = 0; j < 4; j++)
            {
                if (row[j] == '#')
                {
                    col[i] = j + 1;
                    break;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
            cout << col[i] << " ";
        cout << endl;
    }

    return 0;
}
