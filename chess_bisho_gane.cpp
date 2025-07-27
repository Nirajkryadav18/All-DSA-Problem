#include <iostream>
using namespace std;
int main()
{                            // find the bishop of chess;
    int a,b;
    cout<<"enter the nimber:";
    cin>>a;
    cout<<"enter the number:";
    cin>>b;
    int count =0;

    count=count+min(8-a,8-b);
    count=count+min(8-a,b-1);
    count=count+min(a-1,b-1);
    count=count+min(a-1,8-b);

    cout<<count<<endl;
}