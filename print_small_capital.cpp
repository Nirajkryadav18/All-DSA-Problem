// convert the 'a' to capital 'A' in using function ;

#include <iostream>
using namespace std;

char convert(char name)  //function declearation;
{
    char ans=name-'a'+'A';    //function define ;
    return ans;
}

int main()
{
    char name;
    cout<<"enter the charector";
    cin>>name;

    cout<<convert(name);  // calling function 
}
