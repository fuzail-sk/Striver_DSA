#include<iostream>
using namespace std;
int main (){
    int arr[6]={13,46,24,52,20,9};
    int n = 6;

    //selection sort

    
    
    for (int i = 0 ;i < n ;i++){
        for(int j = 0; j < n; j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0 ; i < 6; i++){
        cout << arr[i] << " "; 
    }
}