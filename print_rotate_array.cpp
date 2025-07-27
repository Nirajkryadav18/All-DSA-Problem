#include <iostream>               // find the rotated array and search the min value;
using namespace std;
int FindMin(int arr[],int n)
{
    int start=0,end=n-1;
    int ans=arr[0];

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]>=arr[0])
        {
            start=mid+1;   
        }
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}
int main() 
{
    int arr[1000];
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the element of arr:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<FindMin(arr,n);
}