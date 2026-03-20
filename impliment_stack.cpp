#include<iostream>
using namespace std;
// inmpliment with array;
// create the class;
class stack
{
    int *arr;
    int capacity;
    int top;

    public:
// used od flag  value why becouse last value mean suppose stack empty return-1 -this concept is convert the stack is empty return know;
    bool flag;
    // create a cunstructor
    stack(int s)
    {
        capacity=s;
        top=-1;
        arr=new int[s];  // means s k address k array k under aa jayega;
        flag=1;
    }
  // impliment the 5 operation;
  // push
  void push(int value)
  {
    if(top==capacity-1)
    {
       cout<<"stack is overflow\n";
       return; 
    }
    else 
    {
      top++;
      arr[top]=value;
      cout<<"pushed "<<value<<" in the satck\n"; 
      flag=0;
    }
  }
  //pop
  // used of pop/ delete operation;
  void pop()
  {
    if(top==-1)
    {
        cout<<"stack underflow\n";
    }
    else{
         cout<<"popped "<<arr[top]<<" from the stack\n";
        top--;  
        if(top==-1)
        flag=1;
    }
  }

  //peek/top
 //used top /peek;
 int peek()
 {
    if(top==-1)
    {
        cout<<"stack is empty\n";
        return -1;
    }
    else 
    {
        return arr[top];
    }
 }

  //isEmpty
  // used of empty value;
  bool isempty()
  {
    return top==-1;
  }
  //isSize;
  // used of isSize
  int size()
  {
    return top+1;
  }

};
//create the main function;
int main()
{
   stack s(5);
  int value=s.peek();
//   if(s.flag==0)
//   cout<<value<<endl;
  s.push(2);
  s.pop();
  s.pop();
  s.pop();

 
}