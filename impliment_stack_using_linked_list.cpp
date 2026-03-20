#include<iostream>
using namespace std;
// stack create the linked list through ;
// create the class;
class Node
{
    public:
    int data;
    Node *next;

    // create the cunstructor
    Node(int value)
    {
       data=value;     // this allso create the all part is creating node;
       next=NULL; 
    }
};

// again all the operation of perform know;
class stack
{
    Node *top;
    int capacity;  // this line of code to say actual size of a satck;

    public:
    stack()   // this constructor it initialize the value;
    {
        top=NULL;
        capacity=0;
    }
  // know all the operatioon used;
  // push 
  // used of push operation;
  void push(int value)
  {
    Node *temp=new Node(value);
    if(temp==NULL)
    {
        cout<<"stack is overflow\n";
        return;
    }
    else{
    temp->next=top;
    top=temp;
    capacity++;
    
    cout<<"pushed "<<value<<"into the stack\n";
    }
  }
  // pop
  // again used pop operation;
  void pop()
  {
    if(top==NULL)
    {
      cout<<"stack is underflow\n";
      return;
    }
    else{
        Node *temp=top;
        cout<<"popped "<<top->data<<"from the stack\n";
        top=top->next;
        delete  temp;
        capacity--;
    }
  }
  //peak
  // used of peek;
  int peek()
  {
    if(top==NULL)
    {
        cout<<"stack is empty \n";
        return -1;
    }
    else{
        return top->data;
    }
  }
  //isempty
  //used of isEmpty;
  bool IsEmpty()
  {
    return top==NULL;
  }
  // isSize

  int size()
  {
    return capacity;
  }


};
// create the main function;
int main()
{
    stack s;
    s.push(6);
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    cout<<s.IsEmpty()<<endl;

}