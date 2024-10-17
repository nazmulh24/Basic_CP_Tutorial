// Pythagorean Theorem II
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int c = sqrt(a * a + b * b);
            if (c <= n && (a * a + b * b) == c * c)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}