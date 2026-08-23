#include<iostream>
using namespace std;
int main(){

    //Upper section 
    
    int n ; 
    cin >> n;

    for (int i = 0 ; i < n; i++){

        //Pyramid -1 
        for(int j = 0; j < n - i - 1 ;j++){
            cout << " ";
        }

        //Pyramid - 2 
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }

        //Pyramid - 3
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    //Downward Section
    for(int i = 0 ; i < n; i++){
        //Pyramid -1 

        for (int j = 0 ; j < i ; j++){
            cout << " ";
        }
        
        //Pyramid -2 
        
        for(int j = 0 ; j < n - i ; j++){
            cout << "*";
        }

        //Pyramid - 3
        
        for(int j = 0 ; j < n - i -1 ; j++){
            cout << "*";
        }

        cout << endl;
    }
}