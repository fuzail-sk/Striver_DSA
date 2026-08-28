#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) {
        //couting actual sum 
        int n = nums.size();
        int sum_1 =(n*(n+1))/2;

        //calculating sum of vector
        int sum_v = 0;
        for(int i = 0; i < nums.size();i++){
            sum_v= sum_v + nums[i];
        }
        return (sum_1 - sum_v);
        
}
int main(){
    vector<int>nums={0, 1, 2, 4, 5, 6};
    int result = missingNumber(nums);
    cout << result;
}