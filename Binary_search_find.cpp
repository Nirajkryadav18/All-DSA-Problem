// find the binary serch of element of arr;

#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)   // it is function create know;
{
    // start,end,mid;
    int start=0,end=n-1,mid;

    while(start<=end)
    {
    // find the mid;
    mid=(start+end)/2;

    
    if(arr[mid]==key)
    return mid;
    
    else if(arr[mid]<key)
    start=mid+1;

    else
    end=mid-1;
    }
    return -1;  // whenaver value are not prasent of array the essaly used know;
}


int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key;
    cout<<"enter the key";
    cin>>key;

    cout<<binarysearch(arr, n, key);
    return 0;
}