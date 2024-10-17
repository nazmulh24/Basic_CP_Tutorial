// // 2023
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int b[n];
//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         // Check if product of remaining elements is equal to 2023
//         int product = 1;
//         for (int i = 0; i < n; ++i)
//         {
//             product *= b[i];
//         }

//         if (product == 2023)
//         {
//             cout << "YES" << endl;

//             // Output the removed elements
//             for (int i = 1; i <= k; ++i)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }

//         bool found = false;
//         // Check if product of remaining elements is 2023
//         for (int i = 0; i < n; ++i)
//         {
//             if (b[i] == 1)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//         {
//             cout << "YES" << endl;
//             for (int i = 0; i < k; ++i)
//                 cout << 1 << " ";
//             cout << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;  // (1≤𝑛,𝑘≤5) 

        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool found = false;
        vector<int> a;

        for (int i = 1; i <= 2023; ++i) {
            if (find(b.begin(), b.end(), i) == b.end()) {
                a.push_back(i);
                if (a.size() == k) {
                    found = true;
                    break;
                }
            }
        }

        if (found) {
            cout << "YES" << endl;
            for (int i = 0; i < k; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
