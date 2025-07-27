#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"enter the number:";
cin>>number;
while(number%2==0)
{
    cout<<number<<"even:"<<endl;
    number++;
}

cout<<number<<"odd:"<<endl;
}