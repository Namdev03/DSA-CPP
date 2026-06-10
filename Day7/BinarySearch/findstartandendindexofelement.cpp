#include <iostream>
#include <vector>
using namespace std;

class Rotate {
public:
    vector<int> rotetarr(vector<int>& arr, int target) {
        int n = arr.size();

        int start = 0, end = n - 1;
        int index1 = -1;

        // First occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                index1 = mid;
                end = mid - 1;
            }
            else if (arr[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        start = 0;
        end = n - 1;
        int index2 = -1;

        // Last occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                index2 = mid;
                start = mid + 1;
            }
            else if (arr[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {index1, index2};
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;

    Rotate obj;
    vector<int> result = obj.rotetarr(arr, target);

    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;

    return 0;
}