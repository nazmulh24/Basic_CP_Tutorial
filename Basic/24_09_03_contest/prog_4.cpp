//--> Satyam and Counting

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

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }

        int count_y0 = 0, count_y1 = 0;

        for (const auto &p : v)
        {
            if (p.second == 0)
            {
                count_y0++;
            }
            else if (p.second == 1)
            {
                count_y1++;
            }
        }

        // Calculate the number of distinct right triangles
        long long result = count_y0 * (count_y1 * (count_y1 - 1) / 2) + count_y1 * (count_y0 * (count_y0 - 1) / 2);

        cout << result << endl;
    }

    return 0;
}
