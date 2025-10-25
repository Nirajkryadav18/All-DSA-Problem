#include <iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<&a<<endl;
    int *ptr=&a;
    cout<<sizeof(ptr)<<endl;  // print the size of adrees

    // float type of data print the data;

    float m=2.6;
    float *ptr1=&m;
    cout<<sizeof(ptr1)<<endl;  // size of address

}