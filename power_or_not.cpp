#include <iostream>
using namespace std; // print the power or not;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num < 1)
        return 0;

    while (num != 1) {
        if (num % 2 == 1) 
            return 0;
        
        num = num / 2;
    }
    return 1;
}
