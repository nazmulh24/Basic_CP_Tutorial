#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (T ≤ 100)
    for (int i = 1; i <= T; i++)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3; // (N ≤ 1000)
        int mid;
        if ((n1 >= n2 && n1 <= n3) || (n1 <= n2 && n1 >= n3))
            mid = n1;
        else if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3))
            mid = n2;
        else
            mid = n3;
        cout << "Case " << i << ": " << ((n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3)) << " " << mid << " " << ((n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3)) << endl;
    }
    return 0;
}
