// find the Kth posetive missing number;

#include <iostream>
using namespace std;
int FindKthPosetive(int arr[],int k)
{
    int start=0,end=k-1,mid;
    int ans=arr[0];
    
    while(start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]-mid-1>=k)
        {
          ans=mid+1;
          end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans+k;    
}
int main()
{
    int arr[1000];
    int k;
    cout<<"enter the size of array:";
    cin>>k;
    cout<<"enter the array of element:";

    for(int i=0;i<k;i++)
    {
        cin>>arr[k];
    }

    cout<<FindKthPosetive(arr,k);
}