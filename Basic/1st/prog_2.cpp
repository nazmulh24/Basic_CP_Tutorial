#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (T ≤ 25)
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n; //(0 ≤ n ≤ 20)
        cout << n / 2 << " " << n - n / 2 << endl;
    }
    return 0;
}
