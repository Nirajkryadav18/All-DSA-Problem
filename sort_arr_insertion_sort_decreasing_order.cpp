// sort the arr of using insertion sort in decreasing order;

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of arr:";
    cin>>n;
    cout<<"enter the element of arr:";

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i;i>0;j--)
        {
            if(arr[j]>arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}