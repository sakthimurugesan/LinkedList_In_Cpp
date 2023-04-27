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
void deleteFirstNode() {
    

    if (head == NULL) { // check if list is empty
        return;
    }

    head = head->next; // set head to ptr node
    
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
    replace(5,99);
    display();
}
