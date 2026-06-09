#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class rotete
{
public:
    void rotetarr(vector<int> &arr)
    {
        int n = arr.size();
        for (int j = 0; j < n; j++)
        {
            for (int i = j; i > 0; i--)
            {
                if (arr[i] < arr[i - 1])
                {
                    swap(arr[i], arr[i - 1]);
                }else{
                    break;
                }
            }
        }
        for (int x : arr)
        {
            cout << x << ' ';
        }
    }
};
int main()
{
    vector<int> arr = {12, 100, 15, 3, 4, 5, 6};
    rotete obj;
    obj.rotetarr(arr);
    return 0;
}