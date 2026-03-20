#include<iostream>
using namespace std;
// create the class ;
class Node
{
    public:
    int data;
    Node *next;

   Node(int value)
  {
    data=value;
    next=NULL;
  }
};

// create main function;
int main()
{
    Node *head,*tail;
   tail= head=NULL;

    int arr[]={2,4,6,8,10};
    // insert a end position of data;
    for(int i=0;i<5;i++)
    {
    // linked list is emty;
    if(head==NULL)
    {
      head=new Node(arr[i]); 
      tail=head;
    }

    // linked list is emty;
    else{
      tail->next=new Node(arr[i]);
      tail=tail->next;
    }
    }
    Node *temp;
    temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}