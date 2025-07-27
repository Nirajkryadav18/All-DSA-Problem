#include <iostream>
#include <climits>
using namespace std;
int main()                  //find the max value 
{
    int arr[5]={52,78,96,524,12};
    int ans=INT_MIN;

    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
}

