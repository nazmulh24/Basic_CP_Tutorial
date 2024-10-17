#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        unordered_map<int, long long> xxxx, yyyy;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            xxxx[a[i] % x]++;
            yyyy[a[i] % y]++;
        }
        long long pairs = 0;
        for (int i = 0; i < n; ++i)
        {
            int remX = a[i] % x;
            int remY = a[i] % y;
            pairs += yyyy[(x - remX) % x] * xxxx[(y - remY) % y];
        }
        cout << pairs << endl;
    }
    return 0;
}
