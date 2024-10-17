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
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int rem = sum % 3;

        if (rem == 0)
        {
            cout << "0" << endl;
            continue;
        }
        else if (rem == 2)
        {
            cout << "1" << endl;
            continue;
        }
        else
        {
            bool x = false;
            for (int i = 0; i < n; ++i)
            {
                if (arr[i] % 3 == 1)
                {
                    x = true;
                    break;
                }
            }
            if (!x)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
    }
    return 0;
}
