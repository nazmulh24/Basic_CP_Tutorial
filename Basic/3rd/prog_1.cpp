#include <iostream>
using namespace std;
#define optimize()                 \
    \ios_base::sync_with_stdio(0); \
    \cin.tie(0);                   \
    cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int count = 0;
        int num = 1;
        while (true)
        {
            if (num % 3 != 0 && num % 10 != 3)
            {
                count += 1;
            }

            if (count == k)
            {
                cout << num << endl;
                break;
            }
            num++;
        }
    }

    return 0;
}
