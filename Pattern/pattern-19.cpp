#include<iostream>
using namespace std;
int main (){
    int n; 
    cin >> n;

     // upper half
    for(int i = 0; i < n; i++){
        
        //Pyramid -1 
        for(int j = 0 ; j <n-i; j++){
            cout << "*";
        }

        // Pyramid -2 ; 
        for (int j = 0; j < 2*i ; j++){
            cout << " ";
        }

        for(int j = 0 ; j < n-i ; j++){
            cout << "*";
        }
        cout << endl;
    }

        // Lower half
    for(int i = 0 ; i < n; i++){
        for (int j = 0; j <=i; j++){
            cout << "*";
        }
        for(int j = 0 ; j <2*(n-i-1) ; j++){
            cout << " ";
        }
        for (int j = 0; j <=i; j++){
            cout << "*";
        }
        cout << endl; 

}
}

