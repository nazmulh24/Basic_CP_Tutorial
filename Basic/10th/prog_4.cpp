//--> Arrival of the General
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = 0, min = 100, max_index, min_index;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            min_index = i;
        }
    }
    if (max_index > min_index)
        min_index++;
    int t_index = (n - 1) + max_index - min_index;
    cout << t_index << endl;
    return 0;
}
