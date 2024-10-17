#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T; // (1≤ T≤ 100)
    for (int i = 1; i <= T; i++)
    {
        int r1, r2, B; // (1 ≤ r1 ≤ 1000),(1 ≤ r2 ≤ r1),(1 ≤ B < 300)
        cin >> r1 >> r2 >> B;
        double currentRunRate = static_cast<double>(r2) / (300 - B) * 6;
        double requiredRunRate = static_cast<double>(r1 - r2 + 1) / (r1 - r2) * 6;
        cout << fixed << setprecision(2) << currentRunRate << " " << requiredRunRate << endl;
    }
    return 0
}
