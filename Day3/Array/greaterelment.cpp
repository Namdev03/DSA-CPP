#include <iostream>
using namespace std;
int main()
{
    int marks[5]={33,67,88,99,07};
    int greatestvalue =marks[0];
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]>greatestvalue)
        {
            greatestvalue = marks[i];
        index =i;
        }
        
    }
  cout<<greatestvalue<<" "<<index;   
  return 0;
}