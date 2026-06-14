#include <iostream>
#include <vector>
using namespace std;

class RotateVector
{
public:
    vector<int> targetElement(vector<int> &nums, int k)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            if (nums[left] + nums[right] == k)
            {
                return {left, right};
            }
            else if (nums[left] + nums[right] < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
    }
};

int main()
{
    vector<int> arr = {4, 8, 12, 15, 17, 19, 21, 25};
    int k = 40;

    RotateVector obj;
    vector<int> ans = obj.targetElement(arr, k);

    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}