#include<iostream>
using namespace std;
int main (){
    int n; 
    cin >> n;
    char count = 'A';
    //pyramid - 1; 
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout << " ";
        }

    // Pyramid -2 
        
        for(int j = 0 ; j <= i ; j++){
            cout << char(count+j); 
        }

    // Pyramid -3
    
        for (int j = 0 ; j < i ; j++){
            cout << char(count + j); 
        }
        cout << endl; 
    }     
    
}
