#include <iostream>
#include <vector>

using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> result;
    
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] < nums2[j]) {
            
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        else if (nums1[i] > nums2[j]) {
            
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        else {
            
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            
            i++;
            j++;
        }
    }

    // Remaining elements of nums1
    while (i < nums1.size()) {
        
        if (result.empty() || result.back() != nums1[i]) {
            result.push_back(nums1[i]);
        }
        
        i++;
    }

    // Remaining elements of nums2
    while (j < nums2.size()) {
        
        if (result.empty() || result.back() != nums2[j]) {
            result.push_back(nums2[j]);
        }
        
        j++;
    }

    return result;
}


int main() {

    vector<int> nums1 = {1, 2, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 6, 7};

    vector<int> result = unionArray(nums1, nums2);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}