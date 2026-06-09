#include <iostream>
#include <vector>
using namespace std;

class misingnum {
public:
    int missingNum(vector<int>& arr) {
        int size = arr.size();

        for (int i = 1; i <= size + 1; i++) {
            bool isfound = false;

            for (int j = 0; j < size; j++) {
                if (arr[j] == i) {
                    isfound = true;
                    break;
                }
            }

            if (!isfound) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};

    misingnum obj;
    cout << "Missing Number: " << obj.missingNum(arr);

    return 0;
}