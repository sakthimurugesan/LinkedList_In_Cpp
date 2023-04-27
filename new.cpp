#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head=0;

void insert(int n)
{
    Node *obj=new Node();
    obj->data=n;
    obj->next=0;
    if(head==0)
    {
        head=obj;
    }
    else
    {
        obj->next=head;
        head=obj;
    }
}

void print()
{
    Node *t=head;
    while(t!=0)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
void replace(int a,int b)
{
    Node *a_add;
    Node *b_add;
    Node *t=head;
    while(true)
    {
        if(t->data==a)
        {
            a_add=t;
            break;
        }
        t=t->next;   
    }
    t=head;
    while(true)
    {
        if(t->data==b)
        {
            b_add=t;
            break;
        }
        t=t->next;   
    }
    a_add->data=a_add->data+b_add->data;
    b_add->data=a_add->data-b_add->data;
    a_add->data=a_add->data-b_add->data;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        insert(i);
    }
    print();
    replace(5,10);
    print();

    
}