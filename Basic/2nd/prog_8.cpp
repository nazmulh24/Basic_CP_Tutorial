#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        int H, W;
        cin >> H >> W; // 1 ≤ (H, W) ≤ 300
        if (H == 0 && W == 0)
            return 0;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (i == 0 || i == H - 1 || j == 0 || j == W - 1)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
