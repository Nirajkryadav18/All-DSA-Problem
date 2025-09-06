// print the max different between 2 element of array;
#include <iostream>
#include <climits>
using namespace std;
int maxielement(int arr[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            maxi=max(maxi,arr[j]-arr[i]);
        }
    }
    return maxi;
}

// create the main function;
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

    // create the callling function:
    cout<<maxielement(arr,n);
    return 0;
}