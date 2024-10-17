#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i];
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int target = sum / n;
        bool possible = true;
        int excess = 0;
        for (int i = 0; i < n; ++i)
        {
            excess += a[i] - target;
            if (excess != 0 && i < n - 1)
            { // There should be no excess after the last container
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
