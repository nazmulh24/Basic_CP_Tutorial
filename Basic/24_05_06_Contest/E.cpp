#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int n = 1; n <= T; ++n)
    {
        long long int x, y;
        cin >> x >> y;
        double h = 0, t = 0;
        double x1 = (double)x;
        double y1 = (double)y;
        int time = 1;
        while (true)
        {
            h += x1;
            x1 /= 2;
            t = y1 * time;
            if (h < t)
            {
                cout << "Case #" << n << ": " << time << endl;
                break;
            }
            time++;
        }
    }
    return 0;
}
