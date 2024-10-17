//--> Team
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        for (int i = 0; i < 3; i++)
        {
            if ((a[0] == 1 && a[1] == 1) || (a[1] == 1 && a[2] == 1) || (a[0] == 1 && a[2] == 1))
                count++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}
