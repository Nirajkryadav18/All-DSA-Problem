// find the squre root of number using arry;
#include <iostream>
using namespace std;

    int findsqrt(int x)
    {
    int start=0,end=x,ans,mid;

    while(start<=end)
    {
        mid=(start+end)/2;

        if(mid*mid==x)
        {
            ans=mid;
            break;
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

    cout<<findsqrt(x);
}