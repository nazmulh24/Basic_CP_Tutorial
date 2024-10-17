#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    // Initialize Fibonacci numbers
    long long a = 0, b = 1, c = 1;
    // Find the Fibonacci numbers such that a + b + c = n
    while (a + b + c <= n)
    {
        c = b;
        b = a;
        a = a + b;
    }
    // Output the solution: a, b, c
    cout << a << " " << b << " " << c << endl;
    return 0;
}
