#include <iostream>
using namespace std;         // write a program in the rectangle ;
int main()
{
    int a,b,c,d;
    cout<<"Enter the four sides of the area: ";
    cin>>a>>b>>c>>d;

    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    {
        cout<<"The given sides can form a rectangle:"<<endl;
    }
    else 
    {
    cout<<"The given sides canot form a rectangle:"<<endl;
    }
    return 0;

}