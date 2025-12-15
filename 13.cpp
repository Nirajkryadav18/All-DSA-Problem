#include <iostream>
using namespace std;

int fib(int n)
{
    // create the base case ;
    if(n<=1)
    {
    return 1;
    }

    return fib(n-1)+fib(n-1);
}

int main()
{
    int n=6;
    cout<<fib(n);
}