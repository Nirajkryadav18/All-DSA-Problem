#include <iostream>
using namespace std;       //   write the program in trailing the zero fectorial;
int main()
{
    int n,count =0;
    cout<<"enter the number:";
    cin>>n;

    while(n>=5)
    {
        count=count+n/5;     // -> count +=n/5;
        //  n=n/5;  ->  n/=5;  
       n=n/5;
    }
    cout<<count<<endl;
}
