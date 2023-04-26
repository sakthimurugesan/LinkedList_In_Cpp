#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
// 26/4
struct Node *head, *temp;
void insert()
{
    Node *obj = new Node();
    cin >> obj->data;
    obj->next = 0;
    if (head == 0)
    {
        head = obj;
        temp = obj;
    }
    else
    {
        temp->next = obj;
        temp = obj;
    }
}
void deleteEnd()
{
    Node *lastBefore=head;
    Node *last=head->next;
    while(last->next!=0)
    {
        lastBefore=last;
        last=last->next;
    }
    lastBefore->next=0;
}
void display()
{
    Node *ptr = head;
    while (ptr != 0)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    head = 0;
    for (int i = 0; i < 3; i++)
    {
        insert();
    }
    display();
    deleteEnd();
    display();
}