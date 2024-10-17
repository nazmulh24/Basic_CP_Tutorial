//--> Even Odds

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j=0;
    cin >> n >> k;
    int arr[n], arr_2[n];
    for (i = 1; i <= n; i++)
        arr[i] = i;

    for (i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        j++;
        if (i % 2 != 0)
            arr_2[j] = arr[i];
        else
            arr_2[j] = arr[i];
    }

    for (j = 1; j <= n; j++)
        cout << arr_2[j] << " ";

    return 0;
}
