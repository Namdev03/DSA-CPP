#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {70, 80, 90, 50, 60};
    // cout<<marks[2];
    // cout<<marks[3];
    // int size = sizeof(marks);
    int size = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }
    //  don't do this;
     int n;
     cout<<"Enter the size of array ";
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     for (int j = 0; j < n; j++)
     {
        cout<<arr[j]<<endl;
     } 
    return 0;
}