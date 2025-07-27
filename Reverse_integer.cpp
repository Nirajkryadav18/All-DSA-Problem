#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number";
    cin>>x;
    int ans=0,rem;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        ans=ans*10+rem;
    }
    cout<<ans<<endl;
}

