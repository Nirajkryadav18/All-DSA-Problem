#include <iostream>
using namespace std;

bool Binarysearch(int arr[],int start,int end,int x)
{
    // base condition;
    if(start>end)
    return 0;


    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return Binarysearch(arr,mid+1,end,x);
    else
    return Binarysearch(arr,start,mid-1,x);
}



int main()
{
    int arr[]={3,8,11,15,20,22};
    int x=15;
    // call the function;
    cout<<Binarysearch(arr,0,5,x);
}