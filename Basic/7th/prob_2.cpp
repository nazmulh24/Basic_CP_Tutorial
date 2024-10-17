// Longest Segment
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int x[N], y[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    double value = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double distance = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
            value = max(value, distance);
        }
    }
    cout << fixed << setprecision(10) << value << endl;
    return 0;
}
