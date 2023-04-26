#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head,*temp;
void insert()
{
    for(int i=0;i<10;i++)
    {
        Node *obj=new Node();
        obj->data=i+1;
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
}
void display()
{
    Node *ptr=head;
    while(ptr!=0)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void insertIndex(int pos)
{
    Node *ptr=head;
    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    Node *t=ptr->next;
    ptr->next=ptr->next->next;
    delete t;

    

}
int main()
{
insert();
display();
insertIndex(2);
display();
}