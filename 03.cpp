#include <iostream>
using namespace std;

void fun3(int n)
{                         // print happy birthday using recursion;
    // base case;
    if(n==0)
    {
        cout<<"happy birthday"<<endl;
        return ;
    }

    cout<<n<<"days left for birthday"<<endl;
    fun3(n-1); 
}

int  main()
{
    int n=3;

    fun3(3);
}