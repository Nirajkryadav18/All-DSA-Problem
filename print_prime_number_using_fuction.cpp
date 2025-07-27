#include <iostream>
using namespace std;
bool prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int fect(int n){
    int ans=1;
     for(int i=1;i<=n;i=i+1)
     {
     ans=ans*i;
     }
     return ans;

     
}

int main()
{
    int a,b;
    cout<<"enter the  first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;


    // A is prime or not ;
    cout<<prime(a)<<endl;
    // A ka fectorial;
    cout<<fect(a)<<endl;
    // B ka prime number or not ;
    cout<<prime (b)<<endl;
    // b ka fectorial;
    cout<<fect(b)<<endl;
    //B-A prime or not;
    cout<<prime(b-a)<<endl;
    //B-A ka fectorial ;
    cout<<fect(b-a)<<endl;

    return 0;

}