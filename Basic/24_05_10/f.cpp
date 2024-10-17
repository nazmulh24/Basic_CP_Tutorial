#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        int count = 0;
        for (int x = -r; x <= r; x++)
        {
            for (int y = -r; y <= r; y++)
            {
                double distance = sqrt(x * x + y * y);
                if (distance >= r && distance < r + 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
