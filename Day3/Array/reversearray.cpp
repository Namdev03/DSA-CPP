#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {12,20,30,40,50};
  int n = sizeof(marks)/sizeof(marks[0]);
  for ( int i = n-1;i >=0; i--)
  {
    cout<<marks[i]<<" ";
  }
  return 0;
    
}