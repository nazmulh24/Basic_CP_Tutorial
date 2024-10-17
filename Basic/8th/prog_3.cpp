//-> Sum of Digit is Pallindrome or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int rem = n;
    while (rem != 0)
    {
        sum += rem % 10;
        rem = rem / 10;
    }
    int num = sum, rnum = 0;
    while (sum != 0)
    {
        rnum = rnum * 10 + sum % 10;
        sum /= 10;
    }
    if (num == rnum)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
