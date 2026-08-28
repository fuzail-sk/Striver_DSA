#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        for(int i = 0; i <nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
}
int main(){
    vector<int>nums = {2, -4, 4, 0, 10};

    int target ;
    cin >> target;
    int result = linearSearch(nums,target);
    if(result != -1){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }
}