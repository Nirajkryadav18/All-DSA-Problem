#include<iostream>
using namespace std;
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
 int main()
 {

    Node *Head;
    Head=NULL;
 // create the node at beginning;
 int arr[]={2,3,4,5,6,8,10};

 for(int i=0;i<7;i++)
 {                  // ager list exist nhi karta ;
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
    }
    else{
        Node *temp;
        temp= new Node(arr[i]);
        temp->next=Head;
        Head =temp;
    }
 }

  Node *temp=Head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  };
 }