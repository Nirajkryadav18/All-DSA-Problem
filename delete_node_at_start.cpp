#include<iostream>
using namespace std;
// create the class 
class Node
{
    public:
    int data;     // this is two node create the know first node to store the value and second node store the null;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
Node* createlinklist(int arr[],int index,int size)  // this function is create the linked list then return address;
{
    // find the base condtion;
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=createlinklist(arr,index+1,size);

    return temp;
}

int main()
{
    Node *head;
    head=NULL;          // time complexity is O(n) and s.c(n)

    int arr[]={2,3,4,5,6};
    // call the linked list;
     head=createlinklist(arr,0,5);
    
// Delete a not at start point;
if(head!=NULL)
{
    Node *temp=head;
    head=head->next;
    delete temp;
}

 // print the all value;
    Node *temp;
    temp=head;


    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}