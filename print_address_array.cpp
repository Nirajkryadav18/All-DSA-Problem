#include <iostream>
using namespace std;      // print the address and value of pointer;
int main()
{
    int arr[5]={1,2,3,4,5};
    int * ptr=arr;

    // // count the adress of first element or 0 index
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // // print the address of second element or 1 index;
    // cout<<arr+1<<endl;


    // // print the value of 0 index;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<*arr<<endl;

    // // print the all the address 

    // for(int i=0;i<5;i++)
    //     cout<<arr+i<<endl;

    //     //print all the value;

    //     for(int i=0;i<5;i++)
    //     cout<<*(arr+i)<<endl;

    // print all the value;
    for(int i=0;i<5;i++)
    cout<<ptr[i]<<" ";

    // print all the address 

    for(int i=0;i<5;i++)
    cout<<ptr+i<<endl;

    // Arithmatic opration ptr++, p--, ptr=ptr+1;

    // print the all value;
    // for(int i=0;i<5;i++)
    // {
    // cout<<*ptr<<" ";
    // ptr++;
    // }

    // addition ;
    ptr=ptr+3;
    cout<<*ptr<<endl;

    // substraction;
    ptr=ptr-2;
    cout<<*ptr<<endl;

}