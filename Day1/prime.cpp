#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime = true;
    cout << "Enter the number ";
    cin >> n;
    if (n <= 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
            }
        }
    }
    if (isprime)
    {
      cout<<n<<" is prime";
      }
    else
    {
        cout<<n<<" is non prime";
    }
    
    return 0;
}