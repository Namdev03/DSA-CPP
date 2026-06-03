#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i < 6; i++)
    {
       
        for (int j = 1; j <6-i ; j++)
        {
      cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
          cout<<k;
         
        }
        for (int h = i; h >=1; h--)
        {
          cout<<h;
        }
        cout<<endl;
        
       }
    
    return 0;
}