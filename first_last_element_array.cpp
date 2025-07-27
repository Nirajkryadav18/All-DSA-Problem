// print the first and last element off aray;

#include <iostream>
using namespace std;
int searchRenge(int num,int target)
{
    int start=0,end=num-1,mid,first=-1,last=-1;
    while(start<=end)
    {
        mid =(start+end)/2;

        if(arr[mid]==target)
        last=mid;
        start=mid+1;
    }
    else if(arr[mid]<target)
    {
        start=mid+1;
    }
    else
    end=mid-1;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the size of array";

    cout<<searchRenge(num,target);
    
}
