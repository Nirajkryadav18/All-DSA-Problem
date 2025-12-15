#include <iostream>
using namespace std;
void print(int n)       // print the even number using recursion;
{
    if(n==2)
    {
    cout<<2<<endl;
    return;
    }

cout<<n<<endl;
print(n-2);

}

int main()
{
  int n=10;
  // calling the function;

  print(n);
}