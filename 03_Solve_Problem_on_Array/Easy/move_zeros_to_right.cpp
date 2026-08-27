#include<iostream>
#include<vector>
using namespace std;
int moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
};

int main(){
    vector<int>nums ={0, 0, 0, 1, 3, -2};
    
    int result =moveZeroes(nums);
    
    for(int i =0; i < nums.size();i++){
        cout << nums[i]<< " ";
    }

}