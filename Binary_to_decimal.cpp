#include <iostream>           // binary to decimal code; in start for dsa
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    int mul=1,rem,ans=0;

    while(num>0)
    {
        //reminder;
        rem=num%10;

        //number;
        num=num/10;

        //ans
        ans=rem*mul+ans;

        //mul
        mul=mul*2;
    }
    cout<<ans<<endl;
}