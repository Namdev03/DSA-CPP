#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class rotatevector {
public:
    int targetElement(vector<int> arr, int target) {
        int n = arr.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;   // was: regit-left
            if (arr[mid] == target) {
                return mid;                         // found it
            }
            if (arr[left] == arr[mid] && arr[mid] == arr[right]) {
                left++;
                right--;
            }
            if (arr[mid] >= arr[left]) {            // left half is sorted
                if (target >= arr[left] && target < arr[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {                                // right half is sorted
                if (target > arr[mid] && target <= arr[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1;                                  // not found
    }
};

int main() {
    vector<int> arr = {4, 5, 6, 7, 8, 1, 2, 3};
    int target = 2;                                 // was missing ';'
    rotatevector obj;                               // was: rotetevector.obj;
    int index = obj.targetElement(arr, target);     // was missing ';'
    if (index != -1)
        cout << "Found target " << target << " at index " << index << endl;
    else
        cout << "Target " << target << " not found" << endl;
    return 0;
}