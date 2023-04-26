#include<iostream>
using namespace std;
// 26/4
struct Node
{
    int data;
    Node *next;
};
Node *head,*temp;
void insert(int n)
{
    Node *obj=new Node;
    
    obj->data=n;
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
    cout<<endl;
}
void replace(int index,int new_data)
{
    Node *ptr=head;
    for(int i=1;i<index;i++)
    {
        ptr=ptr->next;
    }
    ptr->data=new_data;
}
int main()
{
    head=0;
    for(int i=0;i<10;i++)
    {
        insert(i+1);
    }
    display();
    replace(5,55);
    display();

}