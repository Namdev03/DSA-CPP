#include <iostream>
#include <vector>
using namespace std;

class Missing {
public:
    int missingNum(vector<int>& arr) {
        int size = arr.size();
        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        int expectedSum = (size + 1) * (size + 2) / 2;

        return expectedSum - sum;
    }
};

int main() {
    vector<int> arr = {1, 4, 5, 6, 3};

    Missing obj;
    cout << "Missing number = " << obj.missingNum(arr) << endl;
    return 0;
}