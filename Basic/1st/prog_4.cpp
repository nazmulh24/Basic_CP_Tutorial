#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;   //(T ≤ 125)
    for (int i = 1; i <= T; i++)
    {
        int a, b;
        cin >> a>>b;  // 0 < a,b ≤ 10
        cout << "Case " << i << ": " << a+b << endl;
    }
    return 0;
}
