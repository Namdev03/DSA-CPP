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
        for (int i = 0; i < n; i++)
        {
            int index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[index] > arr[j])
                {
                    index = j;
                }
            }
            swap(arr[i], arr[index]);
        }
        for (int x : arr)
        {
            cout << x << ' ';
        }
    }
};
int main()
{
    vector<int> arr = {12, 50, 100, 15, 3, 4, 5, 6};
    rotete obj;
    obj.rotetarr(arr);
    return 0;
}