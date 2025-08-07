// print the target value of array;  if you any number to target value choose then what posing in array answer to do or not


#include <iostream>
using namespace std;
int findtarget(int arr[],int target,int n)
{
    int start=0,end=n-1,mid,index=n;

    while(start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]==target)
        {
            index=mid;
            break;
        }
        else if (arr[mid]<target)
        {
            start=mid+1;
        }
        else 
        {   
            index=mid;
            end=mid-1;
        }
    }
    return index;
}
// create the main function;

int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element of array";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target value";
    cin>>target;

    // calling function;
    cout<<findtarget(arr,target,n);
    return 0;
}