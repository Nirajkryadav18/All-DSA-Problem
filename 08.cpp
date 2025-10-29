#include <iostream>
using namespace std;    // print the even number from 2 to n;

void printeven(int num,int n)
{
    // base case / break kase;
    if(num>n)
    {
    return;
    }
    cout<<num<<endl;
    printeven(num+2,n);
}

int main()
{
 int n;
 cin>>n;
 
  printeven(2,n);
}