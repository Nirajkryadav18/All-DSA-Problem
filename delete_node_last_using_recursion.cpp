#include<iostream>
using namespace std;
// create the node;
class node
{
    public:
    int data;
    node *next;
    // create contructer;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
// create the recursion to print the all function;
node*createlinkedlist(int arr[],int index,int size)
{
    // find the base condition;
    if(index==size)
    {
        return NULL;     // this function is find the all value;
    }
    node*temp;
    temp=new node(arr[index]);
    temp->next=createlinkedlist(arr,index+1,size);
    return temp;
}
// create the main function;
int main()
{
    node*head;
    head=NULL;
    int arr[]={2,3,5,6,8};
    head=createlinkedlist(arr,0,5);

    // dilete the node at last point;
    if(head!=NULL)
    {
       // only one node  is persent;
       if(head->next==NULL)
       {
        node*temp=head;
        delete temp;
        head=NULL;
       }
       // more then 1 node is persent
       else{
        node *curr=head;
        node*prev=NULL;

        // curr next is not null;
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
         prev->next=curr->next;
         delete curr;
         
       }
    }
    // print all function
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}