#include <iostream>
using namespace std;
int main()
{
    int n; // 0 < n ≤ 10000

    while(cin >> n)
    {
        if(n>10000 || n<0)
            return 0;
        int a, sum = 0, max = -1000000, min = 1000000;
        for (int i = 0; i < n; i++)
        {
            cin >> a; // −1000000 ≤ a ≤ 1000000
            if (a < min)
                min = a;
            if (a > max)
                max = a;
            sum += a;
        }
        cout << min << " " << max << " " << sum << endl;
    }
    return 0
}
