#include<iostream>
using namespace std;
// 26/4
struct Node
{
    int data;
    Node *next;
};
Node *head,*temp;
void insert()
{
    Node *obj=new Node;
    
    cin>>obj->data;
    obj->next=0;
    if(head==0)
    {
        head=obj;
        temp=obj;
    }
    else
    {
        temp->next=obj;
        temp=obj;
    }
}
void display()
{
    Node *ptr=head;
    while(ptr!=0)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    head=0;
    for(int i=0;i<3;i++)
    {
        insert();
    }
    display();
}