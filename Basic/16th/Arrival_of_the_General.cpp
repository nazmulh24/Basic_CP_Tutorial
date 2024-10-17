#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; i++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
                count++;
                i++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
