#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int ar[n - 1];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    int Tsum = n * (n + 1) / 2;
    cout << Tsum - sum << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl '\n'

// int main()
// {
//     optimize();
//     int n;
//     cin >> n;
//     int a[n-1];
//     for (int i = 1; i <= n - 1; i++)
//     {
//         int num;
//         cin >> num;
//         a[num]++;
//     }
//     for (int i = 1; i <= n - 1; i++)
//     {
//         if (a[i] == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
