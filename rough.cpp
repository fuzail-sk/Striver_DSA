#include <iostream>
using namespace std;

bool binary_search(int arr[], int target, int arr_size) {
    int start = 0;
    int end = arr_size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return false;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_size = 5;
    int target;

    cin >> target;

    bool bl = binary_search(arr, target, arr_size);

    if (bl) {
        cout << "Present";
    }
    else {
        cout << "Not present";
    }

    return 0;
}

see what i have thaught for the SIH is 
problem statment : Smart Urban Traffic & Public Transit Demand Prediction System
what i have taught to build 