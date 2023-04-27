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
void replace(int index,int new_data)
{
    Node *ptr=tail;
    for(int i=1;i<=index;i++)
    {
        ptr=ptr->next;
    }
    ptr->data=new_data;
}
int main()

{
    for(int i=1;i<=10;i++)
    {
        insertEnd(i);
    }
    display();
    replace(5,990);
    display();
}