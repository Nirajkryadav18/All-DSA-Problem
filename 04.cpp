#include <iostream>            // print the n to 1 number using recursion;
using namespace std;
void print(int n)
{
    if(n==1)   // base case; // controll the loop;
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);                      
}

int main()
{
    // print the n to 1;
    int n=5;
    // for(int i=n;i>0;i--)
    // {
    //  cout<<i<<endl;
    // }

    // calling the function;
    print(n);
}