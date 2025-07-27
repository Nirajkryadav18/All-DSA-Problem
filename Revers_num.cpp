// print the reverse number ;

#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans=0,rem;
    cout<<"enter the number:";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;
    }
    cout<<ans<<endl;
}
