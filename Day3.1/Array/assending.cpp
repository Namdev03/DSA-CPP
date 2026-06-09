#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,60,50,40,30};
    for (int i = 1; i < 5; i++)
    {
        if (arr[i-1]>>arr[i])
        {
            return false;
        }
        
    }
    return true;
    
}