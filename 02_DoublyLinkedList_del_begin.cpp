#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *pre;
    Node *next;
};
Node *head=0,*temp=0;
void insertAtEnd(int n)
{
    Node *obj=new Node();
    obj->data=n;
    obj->next=0;
    obj->next=0;
    if(head==0)
    {
        head=obj;
        temp=obj;
    }
    else
    {
        temp->next=obj;
        obj->pre=temp;
        temp=obj;
    }
}

void delAtBegin()
{
    Node *obj=head;
    if(head!=0)
    {
        head=obj->next;
        obj->next->pre=0;
        delete obj;
    }

}

void display()
{
    Node *obj=head;
    while(obj!=0)
    {
        cout<<obj->data<<" ";
        obj=obj->next;
    }
    cout<<endl;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
    insertAtEnd(i);
    }
    display();
    delAtBegin();
    display();
}