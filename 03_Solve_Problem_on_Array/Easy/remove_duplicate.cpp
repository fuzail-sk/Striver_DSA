#include<iostream>
#include<vector>
using namespace std;
 int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1 ; i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
        
}
int main(){
    vector<int>nums = {-2, 2, 4, 4, 4, 4, 5, 5};
    int result = removeDuplicates(nums);
    for(int i = 0; i < nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl; 
    cout <<"No of elements after removing duplicate "<< result; 

}
