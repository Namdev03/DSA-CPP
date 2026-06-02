#include <iostream>
using namespace std;
int main()
{
    // for (int i = 1; i <= 21; i = i + 5)
    // {
    //     for (int j = i; j <= i + 4; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // or
    int num = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}

// out put
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20