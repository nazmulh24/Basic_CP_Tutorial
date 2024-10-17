#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (T ≤ 25)
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n; // (0 ≤ n ≤ 20)
        int c1 = n / 2;
        int c2 = n - n / 2;
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}
