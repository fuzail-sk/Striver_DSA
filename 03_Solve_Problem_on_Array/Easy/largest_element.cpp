#include<iostream>
using namespace std; 
int largest_element(){
    int arr[5]={10,3,5,6,11};
    int arr_size = 5; 
    int max_elem = 0;

    for(int i = 0 ; i < arr_size ; i++){
        if(arr[i]>arr[max_elem]){
            return arr[i];
        }
        
    }

}
int main(){
    // int arr[5]={10,3,5,6,11};
    // int arr_size = 5; 
    int n; 
    int result = largest_element();

    cout << "The Maximum Number in the array is "<< result ; 
}