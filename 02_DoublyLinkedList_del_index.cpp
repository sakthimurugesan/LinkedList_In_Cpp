#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
// 26.4
struct Node *head;
struct Node *temp;
void insert()
{
    for(int i=1;i<=10;++i)
    {
        Node *new_node=new Node();
        new_node->data=i;
        new_node->prev=0;
        new_node->next=0;
        if(head==0)
        {
            head=new_node;
            temp=new_node;
        }
        else
        {
            new_node->prev=temp;
            temp->next=new_node;
            temp=new_node;
        }
    }
}
void indexDelete(int index) 
{
    Node *ptr=head;
    for(int i=1;i<index-1;i++)
    {
        ptr=ptr->next;
    }
    ptr->next->next->prev=ptr;
    Node *t=ptr->next;
    ptr->next=ptr->next->next;
    delete t;

}
void display()
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    head = 0;
    insert();
    display();
    indexDelete(5);
    display();
    
}