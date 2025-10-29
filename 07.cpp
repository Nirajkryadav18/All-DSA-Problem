#include <iostream>
using namespace std;

void print(int num)   // second method print from 1 to n;
{
    // base condition;
    if(num==1)
    {
     cout<<1<<endl;
     return;
    }
    print(num-1);
    cout<<num<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n);

}