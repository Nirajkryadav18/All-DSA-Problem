// search the rotated array of any element ;
#include <iostream>
using namespace std;
int search(int arr[],int target ,int n)
{
    int start=0,end=n-1,mid;

    while(start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=target && arr[mid]>=target)
            
                end=mid-1;

                else
                start=mid+1;
            
        }
        else{
            if(arr[mid]<=target && arr[end]>=target)
            start=mid+1;
            else
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element of array:";
     
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

 int target;
 cout<<"enter the target:";
 cin>>target;

    cout<<search(arr,target,n);
}