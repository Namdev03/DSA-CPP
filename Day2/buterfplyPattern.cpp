#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
      for (int k = 1; k <=1; k++)
      {
        for (int m = 1; m < 16-i-i; m++)
        {
           cout<<" ";
        }
        for (int n = 1; n < i; n++)
        {
            cout<<"*";
        }
        
      }
      
        cout << endl;
    }
    return 0;
}