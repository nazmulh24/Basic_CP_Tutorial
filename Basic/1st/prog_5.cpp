#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3000; i++)
    {
        int x, y;
        cin >> x >> y; // 0 ≤ x, y ≤ 10000
        if (x == 0 && y == 0)
            break;
        if(x>y)
            swap(x,y);
        cout << x << " " << y << endl;
    }
    return 0;
}
