#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class rotatevector
{
public:
    int targetElement(vector<int> &arr, int k){
        int left = 0, right = arr.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left + k;
    }
};

int main()
{
    vector<int> arr = {4, 8, 12, 15, 17, 19, 21, 25};
    int k = 15;

    rotatevector obj;
    int ans = obj.targetElement(arr, k);

    cout << ans << endl;

    return 0;
}