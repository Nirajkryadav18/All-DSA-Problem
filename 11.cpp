#include <iostream>
using namespace std;     // power of two number;

int pow(int num,int n)
{
    if(n==1)   // base case;
    {
        return num ;
    }
    return num*pow(num,n-1);
}

int main()
{
    int n=5;
    cout<<pow(2,n);
}