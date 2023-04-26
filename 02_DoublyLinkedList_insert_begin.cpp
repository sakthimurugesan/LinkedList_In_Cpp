#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
// 26/4
struct Node *head;
void insert()
{
    for (int i = 0; i < 5; i++)
    {
        Node *new_node = new Node();

        new_node->data = i + 1;
        new_node->next = 0;
        new_node->prev = 0;
        if (head == 0)
        {
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
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
    insert();
    display();
}
