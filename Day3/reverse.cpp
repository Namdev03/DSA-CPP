#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number ";
    cin>>num;
    int result=0 ;
    while (num)
    {
        int rem = num%10;
        result = result*10 + rem;
        num /=10;
    }
 cout<<result;
 return 0;    
}