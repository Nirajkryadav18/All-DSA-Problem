// print the complement the any number;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    int rem,ans=0,mul=1;
    while(n)
    {
        rem=n%2;   // reminder;
        rem=rem^1;  //x-or nokalna 
        n=n/2;  // multiply;
        ans=ans+rem*mul;    // answer;
        mul=mul*2;   

    }
    cout<<ans<<endl;
}