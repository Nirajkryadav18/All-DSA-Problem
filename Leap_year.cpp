#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    if(n%400==0)
    {
        cout<<"leap year:";
    }
    else if(n%4==0 && n%100!=0)
    {
        cout<<"it is not leap year:";
    }
    else{
        cout<<"it is not leap year:";
    }
}