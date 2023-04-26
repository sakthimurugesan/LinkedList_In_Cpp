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
void insertIndex(int pos,int num)
{
    Node *ptr=new Node();
    ptr->data=num;
    Node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next->next;
    temp->next=ptr;

}
int main()
{
insert();
display();
insertIndex(2,25);
display();
}