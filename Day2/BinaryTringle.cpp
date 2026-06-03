#include <iostream>
using namespace std;
int main()
{
    bool num = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << num;
            num = !num;
        }

        cout << endl;
    }

    return 0;
}
