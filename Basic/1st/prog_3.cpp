#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        int x;
        cin >> x; // 1 ≤ x ≤ 10000
        if (x == 0)
            break;
        cout << "Case " << i << ": " << x << endl;
    }
    return 0;
}