#include <iostream>
using namespace std;     // sum of square of n number

int sqsum(int num,int n)  
{
    // create the base condtion;
    if(n==1)
    {
        return 1;
    }
    return n*n+sqsum(num,n-1);
}


int main()
{
    int n=5;
    cout<<sqsum(2,n);
}