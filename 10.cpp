#include <iostream>
using namespace std;  // sum of natural number;

int sum(int n)
{
    // base case;
    if(n==1)
    {
    return 1;
    }
    return n+sum(n-1);

}

int main()
{
    int n=6;
    cout<<sum(n);
}