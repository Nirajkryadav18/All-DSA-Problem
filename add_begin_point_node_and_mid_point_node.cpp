#include<iostream>
using namespace std;
// create the class
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)  // this cunstructor jo value add karta hai;
    {
        data=value;
        next=NULL;
    }
};
// create the function;
Node *createlinkedlist(int arr[],int index,int size,Node *prev)
{
    // base condition;
    if(index==size)
    {
        return prev;
    }

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
   return createlinkedlist(arr,index+1,size,temp);
}
int main()
{
 Node *head;
 head=NULL;
 
 int arr[]={2,4,6,8,10};

 head=createlinkedlist(arr,0,5,head); //-> this function calling know
  //insert the particular posion of node;
  int x=3;    // this is third posituion of add the node;
  int value=30;
  Node *temp=head;
  x--;
  while(x--)
  {
    temp=temp->next;
  };
  Node *temp2=new Node(value);  // this value is temp to node value put know;
  temp2->next=temp->next;
  temp->next=temp2;
 
 // print the all value;
    // Node *temp;
    temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
