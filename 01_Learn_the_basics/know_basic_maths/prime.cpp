#include <iostream>
using namespace std;

bool prime_no_func(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    bool result = prime_no_func(n);

    if (result == true) {
        cout << "Is a Prime";
    }
    else {
        cout << "Not a Prime";
    }
}