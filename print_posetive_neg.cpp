#include <iostream>
using namespace std;    // print the number posetive and negative
int main ()
{
    int number;
    cout <<"enter the number:";
    cin>> number;
    if (number>0)
    {
        cout<<"positive";
    }
    else if(number==0)
    {
        cout<<"0";
    }
    else 
    {
        cout<<"negative";
    }

}