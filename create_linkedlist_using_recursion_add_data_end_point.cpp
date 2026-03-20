#include<iostream>        // this qn is how to add the data last end point using recursion;
using namespace std;
// create the class;
class Node   // THIS IS CREATE THE node of value store know;
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
// create the fuction;
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
    // head jo return karega address ko or store kar dega head ko

 // print the all value;
    Node *temp;
    temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}