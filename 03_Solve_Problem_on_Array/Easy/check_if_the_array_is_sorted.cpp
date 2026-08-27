#include<vector>
#include<iostream>
using namespace std;
bool isSorted(vector<int>& nums){
	//your code goes here
    for(int i = 0; i < nums.size()-1 ;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true; 
	}

int main(){
    vector<int>nums ={1,3,2,4,5};

    int result = isSorted(nums);
    if(result == true){
        cout<<"Sorted Array";
    }
    else{
        cout<<"Unsorted Array";
    }

}