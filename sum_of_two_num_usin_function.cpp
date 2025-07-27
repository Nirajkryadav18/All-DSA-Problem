// #include <iostream>
// using namespace std;
 
// int sum (int n,int m)
// {
//    int ans =n+m; //function decleare
//    return ans;   // fuction define;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number:";
//     cin>>a;
//     cout<<"enter the second:";
//     cin>>b;


//     cout<<sum(a,b);
//     cout<<endl;
    
// }
#include <iostream>
using namespace std;
int sum(int n,int m)
{
    int ans=n+m;
    return ans;
}
int mul(int n,int m)
{
    int ans=n*m;
    return ans;
}

int rem(int n,int m)
{
    int ans=n%m;
    return ans;
}
int main()
{
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second numbre:";
    cin>>b;

    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    cout<<rem(a,b);
    cout<<endl;

    
}

