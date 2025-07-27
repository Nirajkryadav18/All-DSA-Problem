// second largest number:;

#include<iostream>
#include <climits> 
using namespace std;
int main()
{
    int arr[7]={78,98,456,65,12,32,98};
    int ans=INT_MIN;

    for(int i=0;i<7;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];   // first largest number
        }
        int second=INT_MIN;

        for(int i=0;i<7;i++)
        {
            if(arr[i]!=ans)
            {
                second =max(second,arr[i]);       // second largest number;
            }
        }
        cout<<second<<" ";
    }
}