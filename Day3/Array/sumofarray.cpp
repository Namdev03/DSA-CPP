#include <iostream>
using namespace std;
int main()
{
    int arr[4]={20,30,50,60};
    int sum =0;
    for (int i = 0; i <4; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}