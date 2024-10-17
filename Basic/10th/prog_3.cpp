//--> Perfect Permutation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    double per = static_cast<double>(sum) / n;
    cout << fixed << setprecision(12) << per << endl;
    return 0;
}
