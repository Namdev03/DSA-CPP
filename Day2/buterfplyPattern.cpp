#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }

        for (int m = 1; m <16-2*i-1; m++)
        {
           cout<<" ";
        }
        for (int n = 1; n <=i; n++)
        {
            cout<<"*";
        }   
        cout << endl;
    }
    for (int  p = 1; p< 8; p++)
    {
        for (int q = 8; q >p; q--)
        {
            cout<<"*";
        }
          for (int m = 1; m < 2*p-1; m++)
        {
           cout<<" ";
        }
         for (int q = 8; q >p; q--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}