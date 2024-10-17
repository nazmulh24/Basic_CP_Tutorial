#include <iostream>
using namespace std;
int main()
{
    const int number = 5;
    for (int i = 10; i > 0; i--)
    {
        cout << i << " ";
        if ((i - 1) % number == 0)
            cout << endl;
    }
    return 0;
}
