#include <iostream>
#include <cmath>      // print the armstrong number;
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

bool armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n) {
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit); 
    }
    return ans == num; 
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
 
    int digit = countdigit(num);
 
    if (armstrong(num, digit)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}