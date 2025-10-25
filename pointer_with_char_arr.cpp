#include <iostream>
using namespace std;
int main()
{    

    // print the address in void*;
    // it is print the first index of value; 

    char arr[5]="1234";
    char *ptr=arr;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    // print the charecter;
    char name='a';
    cout<<(void*)&name;
}