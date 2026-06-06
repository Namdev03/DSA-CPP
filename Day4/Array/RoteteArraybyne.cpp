#include <iostream>
#include <vector>
using namespace std;
class rotete{
    public:
    void rotetarr(vector<int> &arr){
        int size = arr.size();
        for (int i = 0; i < size; i++)
        {
          int temp = arr[size-1];
          arr[size-1]=arr[i];
          arr[i]=temp;
        }
        for(int x:arr){
            cout<<x<<" ";
        }
    }
};
int main(){
    vector<int> arr ={12,3,4,5,6};
  rotete obj;
  obj.rotetarr(arr);
    return 0;
}