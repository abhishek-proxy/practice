#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head,*current;
void push(int n)
{
    current = head;
    node new_node = new node;
    new node->data = n;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        while(current != NULL)
            current = current->next;
        current->next = new_node;
    }
}
void display(node current1)
{
    while(current1 != NULL)
    {
        cout<<current1->data<< " ";
        current1 = current1->next;
    }
}
int main()
{
    int n;
    char ch ='y';
    head = NULL;
    while(ch=='y')
    {
        cin>>n;
        push(n);
        cin>>ch;
    }
    display(head);
    return 0;
}
