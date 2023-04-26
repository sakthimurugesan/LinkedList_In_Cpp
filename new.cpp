#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head;
struct Node *temp;
void insert()
{
      Node *new_node=new Node();
      int i;
      cin>>i;
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        insert();
    display();
    
}
