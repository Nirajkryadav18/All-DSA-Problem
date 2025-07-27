//  find the peak value of element of array;
#include <iostream>
using namespace std;
int main()
{
    int arr[7]={5,7,8,10,6,3,2};
    int start=0,end=6,mid;

    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    while(start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;

        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
}
