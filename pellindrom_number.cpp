// pallindrom;

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number:";
    cin>>x;
    
    if(x<0)
    {
        cout<<"it not pellingdrom";
    }
    int ans=0,num=0,rem;
    while(num!=0)
    {
        rem=num%10;  //reminder;
        num=num/10;  //number;
        ans=ans*10+rem;  //answer; 
    }
    if(x==ans)
    {
        cout<<"it is the pellindrom:";
        return 1;
    }
    else
    {
        cout<<"it is not pellindrom:";
        return 0;
    }
    

}