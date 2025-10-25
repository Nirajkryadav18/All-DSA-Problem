#include <iostream>
using namespace std;

// void swapping(int *p1,int *p2)   //pass by pointer;
// {
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }

// // create the main function;

// int main()
// {
//     int first=10,second=20;
//     swapping(&first,&second);
//     cout<<first<<endl<<second<<endl;

//     // print the address of pointer;
//     cout<<&first<<endl;
//     cout<<&second<<endl;

void  swapping(int &p1,int &p2)  // it is pass by reference;
{
    int temp=p1;
    p1=p2;
    p2=temp;
}

// create the main function;
int main()
{
    int first=10,second=20;
    swapping(first,second);
    cout<<first<<endl<<second<<endl;
}


    
