#include<iostream>
using namespace std;
// create the class;
class node
{
    public:
    int data;
    node *next;
    // create the constructor;
    node(int value)
    {                  // this is all the function create the node;
        data=value;
        next=NULL;
    }
};
// create the recursion;
node*createlinkedlist(int arr[],int index,int size)
{
    // find the base conditions;
    if(index==size)
    {
        return NULL;
    }
     node *temp;
     temp=new node(arr[index]);
     temp->next=createlinkedlist(arr,index+1,size);
     return temp;
}
// create the main function;
int main()
{
    node *head;
    head=NULL;
    int arr[]={2,3,5,6,8};
    head=createlinkedlist(arr,0,5);

//   delete the node fist;
 if(head!=NULL)
 {
    node *temp=head;
    head=head->next;
    delete temp;

 }




    // print function;
    node *temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}