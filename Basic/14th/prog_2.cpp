//--> Dima and Friends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for (int i = 1; i <= 5; ++i)
    {
        int t_finger = 0;
        for (int i = 0; i < n; i++)
            t_finger += arr[i];
        t_finger += i;
        if (t_finger % (n + 1) != 1)
            count++;
    }
    cout << count << endl;
    return 0;
}
