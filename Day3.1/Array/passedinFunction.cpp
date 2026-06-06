#include <iostream>
using namespace std;
void printvalue(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}
int main(){
    int arr[5]={10,20,40,50,60};
    cout<<"the arr is ";
    printvalue(arr,5);
      cout<<endl;
      int marks[10]={12,23,55,66,44,66,77,88,99,25};
     cout<<"marks are ";
      printvalue(marks,10);
    return 0;
}