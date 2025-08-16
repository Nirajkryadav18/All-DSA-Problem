// print the segregate 0 and 1;

#include <iostream>
using namespace std;
int main()
{
    int arr[7]={0,1,1,0,0,0,1};
    int start=0,end=6;
    
    // cout<<"enter the numbner:";
    // cin>>n;
    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else
        {
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else
            end--;
        }
    }

for(int i=0;i<7;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}