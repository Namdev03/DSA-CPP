#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;  
    int binary = 0;
    int ans =0;
    while (num!=0)
    {  
        int rem = num%2;
        num/=2;
        ans = ans*10+rem;
    }
   while (ans)
   {
    int rem1 = ans%10;
     ans/=10;
    binary = binary*10+rem1;
   
   }
   cout<<binary;
    return 0;
}