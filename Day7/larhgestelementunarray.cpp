#include<iostream>
using namespace std;
int main(){
    int arr[6]={7,8,9,4,7,100};
    int largest = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if(arr[largest]<arr[i]){
            largest = i;
        }
        else if (arr[largest]==arr[i])
        {
           continue;
        }
        
    }
    cout<<largest<<' ';
    cout<<arr[largest];
}