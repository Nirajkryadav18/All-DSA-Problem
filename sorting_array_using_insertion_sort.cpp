#include <iostream>
using namespace std;            // sorting the array using insertion sort;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of arr:";
    cin>>n;
    cout<<"enter the element of arr:";

    for(int i=0;i<n;i++)       // input the arr;
        cin>>arr[i];


    for(int i=1;i<n;i++)    // outer loop;
    {
        for(int j=i;j>0;j--)   //iner loop;
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    for(int i=0;i<n;i++)   // print the arr 
    {
        cout<<arr[i]<<" ";
    }

}