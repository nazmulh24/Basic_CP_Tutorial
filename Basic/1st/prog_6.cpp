#include <iostream>
using namespace std;
int main()
{
    int a, b; // 0 ≤ a, b ≤ 20000
    char op;
    for (int i = 1; i <= 3000; i++)
    {

        cin >> a >> op >> b;
        if (op == '?')
            break;
        else if (op == '+')
            cout << a + b << endl;
        else if (op == '-')
            cout << a - b << endl;
        else if (op == '*')
            cout << a * b << endl;
        else if (op == '/')
            cout << a / b << endl;
    }
    return 0;
}
