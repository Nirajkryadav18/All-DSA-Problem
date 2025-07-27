#include <iostream>  // condition check;
using namespace std;
int main()
{
    int package;
    cout<<"enter the package:";
    cin>>package;

    if(package>10)
    {
        cout<<"accepted:";
    }
    else{
        cout<<"rejected:";
    }
}