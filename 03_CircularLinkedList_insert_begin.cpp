#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *tail=0;
void insertBegin(int n)
{
    Node *obj=new Node();
    obj->data=n;
    obj->next=0;
    if(tail==0)
    {
        tail=obj;
        tail->next=obj;
    }
    else
    {
        obj->next=tail->next;
        tail->next=obj;
       
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
int main()

{
    for(int i=1;i<=10;i++)
    {
        insertBegin(i);
    }
    display();
}