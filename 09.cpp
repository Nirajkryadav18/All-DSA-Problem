#include <iostream>
using namespace std;

int fect(int n)
{
    // base case;
    if(n==1)
    return 1;

    return  n*fect(n-1);
}
int main()
{
    int n=5;
    cout<<fect(n);
}