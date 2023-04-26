#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
//26/4/23
struct Node *head;
void insert()
{
    Node *obj=new Node();
    int n;
    cout<<"Enter a value : ";
    cin>>n;
    obj->data=n;
    obj->next=0;
    if(head==NULL)
    {
        obj->next=NULL;
        head=obj;
    }
    else
    {
        obj->next=head;
        head=obj;
    }
}
void display()
{
    Node *temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    delete temp;
}
int main()
{
    head=0;
    for(int i=1;i<=5;i++)
    {
        insert();
    }
    display();

}