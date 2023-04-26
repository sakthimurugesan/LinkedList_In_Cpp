#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *ptr;
};

struct Node *head, *temp; // head and temp pointer
void insert()
{
    for (int i = 0; i < 10; i++)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = i + 1;
        newnode->ptr = NULL;
        if (head == 0)
        {
            head = newnode; 
            // updating head pointer if null
            temp = head;
        }
        else
        {
            temp->ptr = newnode; // updating
            temp = newnode;
        }
    }
}
void display()
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
    cout << endl;
}
void deleteFirstNode()
{

    if (head == NULL)
    { 
        // check if list is empty
        return;
    }

    head = head->ptr; 
    // set head to ptr node
}
int main()
{
    head = 0;
    insert();
    display();
}
