#include<iostream>
using namespace std;
int main()
{
     int a=10;
    // cout<<&a<<endl;
    // int *ptr=&a;
    // cout<<sizeof(ptr)<<endl;  // print the size of adrees

  // print the address of a;
  int *ptr=&a;
  cout<<ptr<<endl;  // it is print the address ;
  cout<<*ptr<<endl;  // it is print the value insid a
  int b=20;
  ptr=&b;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;

}