#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *tail=0,*head=0;
void insertEnd(int n)
{
    Node *obj=new Node();
    obj->data=n;
    obj->next=0;
    if(tail==0)
    {
        tail=obj;
        obj->next=tail;
    }
    else
    {
        obj->next=tail->next;
        tail->next=obj;
        tail=obj;
       
    }
}
void delEnd()
{
    Node *temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    Node *del=temp->next;
    temp->next=tail->next;
    tail=temp;
    delete del;
}
void display()
{
    Node *ptr = tail->next;
     
    do
    {
       cout << ptr->data << " ";
        ptr=ptr->next;
    } while (ptr!=tail->next);
    
    cout<<endl;
}
int main()

{
    for(int i=1;i<=10;i++)
    {
        insertEnd(i);
    }
    display();
    delEnd();
    display();
}