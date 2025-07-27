#include <iostream>
using namespace std;

int searchInsert(int arr[], int target, int n) {
    int start = 0, end = n - 1;
    int ans = n;  // Default answer if target is greater than all elements

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            ans = mid; // possible answer
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter the target number: ";
    cin >> target;

   cout<<searchInsert(arr,target,n);

    return 0;
}
