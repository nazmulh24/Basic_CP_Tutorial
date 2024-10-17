// //--> Too Min Too Max
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, sum;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         sum = abs(a[0] - a[1]) + abs(a[1] - a[2]) + abs(a[2] - a[2]) + abs(a[3] - a[0]);
//         cout << sum << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Length of array
        vector<int> a(n);

        // Input array elements
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Get unique values and sort them
        vector<int> unique_values(a.begin(), a.end());
        sort(unique_values.begin(), unique_values.end());
        unique_values.erase(unique(unique_values.begin(), unique_values.end()), unique_values.end());
        int num_unique = unique_values.size();

        int max_value = INT_MIN;
        // Calculate the maximum value for each pair of unique values
        for (int i = 0; i < num_unique; ++i)
        {
            for (int j = i + 1; j < num_unique; ++j)
            {
                int value = 0;
                for (int x : a)
                {
                    value += abs(x - unique_values[i]) + abs(x - unique_values[j]);
                }
                max_value = max(max_value, value);
            }
        }

        cout << max_value << endl;
    }

    return 0;
}
