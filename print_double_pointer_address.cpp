#include <iostream>
using namespace std;

//modify the value of n using function;
void fun(int *p)
{
    *p=*p+10;
}

int main()
{
    int n=10;
    int *p=&n;  // single pointer;
    int **p2=&p;  // double pointer;
    int ***p3=&p2; 

     fun(p);
     cout<<n<<endl;

    // triple pointer;
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;

    // value ko modify karna ho jo n main rakhi hai..
    *p=*p+5;
    cout<<n<<endl;

    //used of double pointer;
    **p2=**p2+5;
    cout<<n<<endl;

    // used of triple pointer ;
    ***p3=***p3+5;
    cout<<n<<endl;
}