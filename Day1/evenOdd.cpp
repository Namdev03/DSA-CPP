#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number ";
    cin>>n;
    if (n % 2 == 0)
    {
        cout << "the number " << n << " is even";
    }
    else
    {
        cout << "the number " << n << " is odd";
    }
    return 0;
}