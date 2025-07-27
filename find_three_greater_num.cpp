// find out the three largest number 

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first number:";
    cin>>a;
    
    cout<<"enter the second number:";
    cin>>b;

    cout<<"enter the third number:";
    cin>>c;

    if(a>=b && a>=c)
    {
        cout<<"a"<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<"b"<<endl;
    }
     
    else if(c>=a && c>=b)
    {
        cout<<"c"<<endl;
    }
    else 
    {
        cout<<"it not a number:";
        
    }
}