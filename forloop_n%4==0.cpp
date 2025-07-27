#include <iostream>     // print the n%4 ==0;
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;

    for(int i=1;i<=n;i=i+1)
    {
        if(i%4==0)
        continue;
        cout<<i<<endl;
    }
}