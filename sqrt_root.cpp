// print the sqrt of number;

#include <iostream>
using namespace std;
int findsqrt(int x)       // print the sqrt root of number:
{
    int start=0,end=x,ans=-1,mid;

    while(start<=end)
    {
        mid=(start+end)/2;

        if(mid*mid==x)
        {
            return mid;
        }
        else if(mid*mid<x)
        {
        ans=mid;
        start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    int x;
    cout<<"enter the number:";
    cin>>x;

    // calling fuction;
    cout<<findsqrt(x);
    return 0;
}