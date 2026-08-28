#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;
    int maximum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cnt++;

            if (maximum < cnt) {
                maximum = cnt;
            }
        }
        else {
            cnt = 0;
        }
    }

    return maximum;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements (0 and 1): ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}