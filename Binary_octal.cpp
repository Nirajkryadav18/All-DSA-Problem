#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the numeber:";     // write a program in binary to octal
    cin>>num;
    int mul=1,rem,ans=0;

    while(num>0)
    {
        //reminder
        rem=num%10;

        //number
        num=num/10;

        // answer
        ans=rem*mul+ans;

        //mul
        mul=mul*8;
    }
    cout<<ans<<endl;
}