#include<iostream>
using namespace std; 
int reverse(int n ){
    int rev_no = 0; 
    while(n > 0){
        //finding last digit 
        int last_digit = n % 10;

        // making the number
        rev_no = rev_no * 10 + last_digit; 
        
        //shorting the number 
           n = n / 10 ; 
    }
return rev_no;

}

int main(){
    int n;
    cin >> n; 

    int found_no = reverse(n);
    if(found_no == n){
        cout<<"Is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}