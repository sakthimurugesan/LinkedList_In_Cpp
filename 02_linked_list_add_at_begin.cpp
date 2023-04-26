#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *ptr;
};

struct Node *head,*temp; //head and temp pointer
void insert()
{
for(int i=0;i<10;i++)
    {
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=i+1;
    if(head==0)
    {
        newnode->ptr=NULL;
        head=newnode; 
    }
    else
    {
        newnode->ptr=head;
        head=newnode;
    }
    }
}
void display()
{
Node *temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->ptr;
    }
    cout<<endl;
}
void deleteFirstNode() {
    

    if (head == NULL) { // check if list is empty
        return;
    }

    head = head->ptr; // set head to ptr node
    
}
int main()
{
    head=0;
    insert();
    display();
}
